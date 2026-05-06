## Description
Libft is the first project of the 42 curriculum. The goal is to create a custom C library (`libft.a`) that implements many of the standard C library functions, as well as some additional utility functions for string manipulation and memory handling. This library will be used in future projects throughout the curriculum where standard C library functions are forbidden.

## Functions Implemented

### Part 1 - Libc functions
- `ft_isalpha` - checks for an alphabetic character
- `ft_isdigit` - checks for a digit (0 through 9)
- `ft_isalnum` - checks for an alphanumeric character
- `ft_isascii` - checks whether a character fits into the ASCII character set
- `ft_isprint` - checks for any printable character
- `ft_strlen` - calculate the length of a string
- `ft_memset` - fill memory with a constant byte

- `ft_bzero` - zero a byte string
- `ft_memcpy` - copy memory area
- `ft_memmove` - copy memory area
- `ft_strlcpy` - size-bounded string copying
- `ft_strlcat` - size-bounded string concatenation
- `ft_toupper` - convert char to uppercase
- `ft_tolower` - convert char to lowercase
- `ft_strchr` - locate character in string
- `ft_strrchr` - locate character in string
- `ft_strncmp` - compare two strings
- `ft_memchr` - scan memory for a character
- `ft_memcmp` - compare memory areas
- `ft_strnstr` - locate a substring in a string
- `ft_atoi` - convert a string to an integer
- `ft_calloc` - allocate memory and set to zero
- `ft_strdup` - save a copy of a string

### Part 2 - Additional functions
- `ft_substr` - extract substring from string
- `ft_strjoin` - concatenate two strings
- `ft_strtrim` - trim beginning and end of string with the specified characters
- `ft_split` - split string, with specified character as delimiter, into an array of strings
- `ft_itoa` - convert integer to string
- `ft_strmapi` - create new string from modifying string with specified function
- `ft_striteri` - applies a function to each character of a string
- `ft_putchar_fd` - output a character to given file descriptor
- `ft_putstr_fd` - output string to given file descriptor
- `ft_putendl_fd` - output string to given file descriptor with newline
- `ft_putnbr_fd` - output integer to given file descriptor

## Usage

### Compiling the library
To compile the library, run the following command at the root of the repository:
```shell
make
```
This will create `libft.a`.

### Cleaning up
To remove the object files (`.o`), run:
```shell
make clean
```
To remove the object files and the library (`libft.a`), run:
```shell
make fclean
```
To recompile the library from scratch, run:
```shell
make re
```

### Using the library in your project
Include the header in your C files:
```c
#include "libft.h"
```
Compile your project with the library:
```shell
cc your_file.c -L. -lft
```
