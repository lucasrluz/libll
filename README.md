# libll

Compilação manual:
`gcc -Wall -Wextra -Werror -c src\*.c`
`ar rcs libft.a *.o`
`gcc main.c -L. -lft -o main.exe`