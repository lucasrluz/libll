@echo off

gcc -c src/*.c -Iinclude
ar rcs libll.a ll_*.o

gcc main.c -Iinclude libll.a -o main

del ll_*.o

.\main.exe