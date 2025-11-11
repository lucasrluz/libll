# libll

Compilação manual:
`gcc -Wall -Wextra -Werror -c src\*.c`
`ar rcs libft.a *.o`
`gcc main.c -L. -lft -o main.exe`

Objetivo:

| Cluster | Functions |
|---|---|
| memory allocation and manipulation | `ft_strlen`, `ft_memcpy`, `ft_memset`, `ft_bzero`, `ft_memmove`, `ft_memcmp`, `ft_memchr`, `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, :new: `ft_free_arr`, :new: `ft_free_ptr` |
| ASCII symbols validation and transformation | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, :new: `ft_is_blankspace`, :new: `ft_isnumeric_str.c` |
| string manipulation | `ft_strlcat`, `ft_strlcpy`, `ft_atoi`, `ft_strnstr`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strtrim`, `ft_split`, `ft_itoa`, :new: `ft_append_char`, :new: `ft_atoli`, :new: `ft_uitoa`, :new: `ft_uitohex`, :new: `ft_ulitohex` |
| printing functions | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| iterative functions | `ft_strmapi`, :new: `ft_striteri` |
| :star: linked lists manipulation | `ft_lstnew`, `ft_lstdelone`, `ft_lstclear`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`, :new: `ft_lst_remove_node` |