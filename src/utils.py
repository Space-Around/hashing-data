import os
import math
from pygost import gost341194
from pygost.gost341194 import GOST341194


def hashing_data(data) -> GOST341194:
    return gost341194.GOST341194(data).digest()


def read_in_chunks(file, offset: int, chunk_size: int=1024):
    file.seek(offset, 0)
    data = file.read(chunk_size)

    yield data


def split_file_by_chunks(path_to_file: str, split_count: int) -> int:
    file_size: int = os.path.getsize(path_to_file)
    chunk_size: int = math.ceil(file_size / split_count)

    return chunk_size


def proc_func(path_to_file: str, offset: int, chunk_size: int, return_dict: dict):
    with open(path_to_file, mode='rb') as file:
        for chunk in read_in_chunks(file, offset, chunk_size):
            return_dict[offset] = hashing_data(chunk)
