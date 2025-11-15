#!/bin/bash

gcc -c src/*.c -Iinclude
ar rcs libll.a ll_*.o

gcc tests/ll_tests.c -Iinclude libll.a -o ll_tests

rm ll_*.o

./ll_tests
