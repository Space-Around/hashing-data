# Hashing data

[![Build Status](https://travis-ci.org/yoomoney/yookassa-payout-sdk-python.svg?branch=master)](https://travis-ci.org/yoomoney/yookassa-payout-sdk-python)
[![License](https://img.shields.io/pypi/l/yookassa-payout.svg)](https://github.com/yoomoney/yookassa-payout-sdk-python)

Data hashing and signing. This project uses GOST R 34.11-94 hash function from Python module pygost and paralleling processes using multiprocessing module.

## Description

### File architecture

### Details

## Setup

### Default installation:

1. `pip3 install -r requirements.txt`
2. change `./config.py` to optimize data processing:


| Name             | Description              | Type  |
| ------------------ | -------------------------- | ------- |
| `SPLIT_COUNT`    | Number of processes      | `int` |
| `PATH_TO_FOLDER` | Path to folder with data | `str` |

### Installation throw Nuika:

1. `python3 -m pip install nuitka`
2. `python3 -m nuitka --follow-imports --include-plugin-directory=path/to/nuitka/module`



   For more deltails read the [doc](https://nuitka.net/doc/user-manual.html).

## Start up

### Default start up:

```
python3 main.py
```

### Start up throw Nuika:

```
./main.bin
```

## Testing

`fallocate -l 1M data_1m.test`
