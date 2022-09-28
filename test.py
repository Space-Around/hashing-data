import time
from pygost import gost341194


def read_in_chunks(file, chunk_size: int=3000):
    while True:
        data = file.read(chunk_size)
        if not data:
            break
        yield data


def main():
    start_time = time.time()
    g = gost341194.GOST341194()

    with open('./data_1m.test', mode='rb') as file:
        for chunk in read_in_chunks(file):
            g.update(chunk)

    g.hexdigest()

    print("--- %s seconds ---" % (time.time() - start_time))


if __name__ == "__main__":
    main()