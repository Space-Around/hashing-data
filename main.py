import config

import os
from pygost import gost341194
from src.utils import split_file_by_chunks, proc_func
from multiprocessing import Process, Manager


def read_in_chunks(file, chunk_size: int=3000):
    while True:
        data = file.read(chunk_size)
        if not data:
            break
        yield data


def main():
    processes: list = []
    split_count: int = config.SPLIT_COUNT

    for file in os.listdir(config.PATH_TO_FOLDER):
        path_to_file = config.PATH_TO_FOLDER + file

        manager = Manager()
        return_dict = manager.dict()

        chunk_size: int = split_file_by_chunks(path_to_file, split_count)

        for proc_index in range(0, split_count):
            offset = proc_index * chunk_size

            proc = Process(target=proc_func, args=(path_to_file, offset, chunk_size, return_dict))
            proc.start()
            processes.append(proc)

        for proc in processes:
            proc.join()

        print(return_dict.values())


if __name__ == "__main__":
    main()