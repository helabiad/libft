*This project has been created as part of the 42 curriculum by helabiad.*

# Libft

## Description

Libft is my first project at 42. It consists of creating my own C library by reimplementing standard C library functions and developing additional utility functions.

The goal is to understand how these functions work internally, strengthen my knowledge of C programming, and build a reusable library for future projects.

Throughout this project, I work with pointers, memory allocation, string manipulation, and linked lists while following the 42 coding standards.

## Library description

`libft.a` is a static C library containing my own implementations of standard C functions and additional utilities. The functions are declared in `libft.h`.

- **Character functions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, and `ft_isprint` check character types. `ft_toupper` and `ft_tolower` convert character case.

- **Memory functions:** `ft_memset` fills a memory block with a specified byte, `ft_bzero` sets bytes to zero, `ft_memcpy` copies memory without overlap, and `ft_memmove` handles overlapping memory regions. `ft_memchr` searches for a byte, `ft_memcmp` compares memory blocks, and `ft_calloc` allocates zero-initialized memory.

- **String functions:** `ft_strlen` calculates string length, `ft_strlcpy` copies a string with a size limit, and `ft_strlcat` appends a string within a specified buffer size. `ft_strchr` and `ft_strrchr` search for characters, `ft_strncmp` compares strings, `ft_strnstr` searches for a substring, `ft_strdup` duplicates a string, and `ft_atoi` converts a string to an integer.

- **Additional string and conversion functions:** `ft_substr` extracts a substring, `ft_strjoin` concatenates two strings, `ft_strtrim` removes specified characters from both ends of a string, and `ft_split` divides a string into an array of strings using a delimiter. `ft_itoa` converts an integer into a string. `ft_strmapi` creates a new string by applying a function to each character, while `ft_striteri` applies a function directly to each character of the original string.

- **File descriptor functions:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` write characters, strings, and integers to a specified file descriptor.

- **Linked list functions:** The `t_list` structure contains a pointer to its content and a pointer to the next node. `ft_lstnew` creates a node, `ft_lstadd_front` and `ft_lstadd_back` add nodes to a list, `ft_lstsize` counts nodes, and `ft_lstlast` returns the last node. `ft_lstdelone` deletes a single node, `ft_lstclear` clears an entire list, `ft_lstiter` applies a function to each node's content, and `ft_lstmap` creates a new list by applying a function to each node's content.

## Instructions

### Compilation

Run the following command at the root of the repository:

```bash
make
```

This compiles the source files and creates the static library `libft.a`.

Other available Makefile rules:

```bash
make clean
make fclean
make re
```

- `make clean` removes the object files.
- `make fclean` removes the object files and the compiled library.
- `make re` rebuilds the library from scratch.

### Usage

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the executable:

```bash
./program
```

Make sure `main.c`, `libft.h`, and `libft.a` are accessible from the appropriate locations.

## Resources

- `man` pages for standard C library functions.
- [cppreference — C language reference](https://en.cppreference.com/w/c)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [GNU Make documentation](https://www.gnu.org/software/make/manual/)
- The 42 Libft project subject and evaluation requirements.
- Testing tools and community testers used to verify function behavior and identify edge cases.

### AI usage

AI was used as a learning aid for the following tasks:

- Understanding C programming concepts, including pointers, memory management, strings, and linked lists.
- Discussing edge cases and reviewing function behavior.
- Understanding Makefile rules and compilation.
- Clarifying linked list operations and function pointer concepts.
- Organizing and improving the project documentation.

The implementation and testing of the functions were carried out as part of my own learning process. AI assistance was used to support my understanding and problem-solving.

## Author

**Login:** helabiad

**School:** 42