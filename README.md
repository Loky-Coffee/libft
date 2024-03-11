<div style="text-align: center;">
  <h1 align="center"style="text-decoration: underline;">Libft Library</h1>
  <div style="display: flex; flex-direction: column; align-items: center;">
    <img src="https://github.com/Loky-Coffee/libft/blob/master/the%20'libft'%20library%20%20%20The%20programming%20owl.png?raw=true" align="center" alt="the 'push_swap' algorithm" width="1024" height="512" />
  </div>
</div>

## Description

`libft` is a custom C library that contains a collection of commonly used functions in C programming. It was created as part of the 42Heilbronn curriculum.

## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Functions](#functions)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This library provides a set of utility functions that can be used in C programs to simplify common tasks. It includes functions for string manipulation, memory management, linked lists, file reading, and more.

## Getting Started

To use `libft` in your C projects, follow these steps:

1. Clone the repository to your local machine:
```bash
https://github.com/Loky-Coffee/libft.git
```

3. Compile the library using the provided Makefile:
```bash
make
cc libft.a my_program.c
```

## Functions

Here is a list of functions available in `libft`:

- `ft_bzero`: Set a buffer to zero.
- `ft_memset`: Fill memory with a constant byte.
- `ft_memcpy`: Copy memory area.
- `ft_memccpy`: Copy memory area until a character is found.
- `ft_memmove`: Copy memory area, even if the source and destination overlap.
- `ft_memchr`: Locate character in buffer.
- `ft_memcmp`: Compare two memory areas.
- `ft_strlen`: Calculate the length of a string.
- `ft_strlcpy`: Copy strings with size limit.
- `ft_strlcat`: Concatenate strings with size limit.
- `ft_strchr`: Locate character in string.
- `ft_strrchr`: Locate character in string from the end.
- `ft_strnstr`: Locate a substring within a string with length limit.
- `ft_strncmp`: Compare characters of two strings with size limit.
- `ft_atoi`: Convert a string to an integer.
- `ft_isalpha`: Check if a character is alphabetic.
- `ft_isdigit`: Check if a character is a digit.
- `ft_isalnum`: Check if a character is alphanumeric.
- `ft_isascii`: Check if a character is an ASCII character.
- `ft_isprint`: Check if a character is printable.
- `ft_toupper`: Convert a character to uppercase.
- `ft_tolower`: Convert a character to lowercase.
- `ft_calloc`: Allocate and zero-initialize memory.
- `ft_strdup`: Duplicate a string.
- `ft_substr`: Extract a substring from a string.
- `ft_strjoin`: Join two strings.
- `ft_strtrim`: Trim leading and trailing whitespace from a string.
- `ft_split`: Split a string into an array of substrings.
- `ft_itoa`: Convert an integer to a string.
- `ft_strmapi`: Apply a function to each character of a string.
- `ft_striteri`: Apply a function to each character of a string with index.
- `ft_putchar_fd`: Output a character to a file descriptor.
- `ft_putstr_fd`: Output a string to a file descriptor.
- `ft_putendl_fd`: Output a string with a newline to a file descriptor.
- `ft_putnbr_fd`: Output an integer to a file descriptor.
- `get_next_line`: Read a line from a file descriptor.
- `ft_lstnew`: Create a new linked list element.
- `ft_lstadd_front`: Add an element to the beginning of a linked list.
- `ft_lstsize`: Get the size of a linked list.
- `ft_lstlast`: Get the last element of a linked list.
- `ft_lstadd_back`: Add an element to the end of a linked list.
- `ft_lstdelone`: Delete an element from a linked list without freeing its content.
- `ft_lstclear`: Delete all elements from a linked list and free their content.
- `ft_lstiter`: Apply a function to each element of a linked list.
- `ft_lstmap`: Apply a function to each element of a linked list and create a new list.
- `free_split`: Free memory allocated for an array of strings.
- `ft_error`: Display an error message to the standard error output.
- `ft_is_min_nbr`: Check if a string represents the minimum possible integer.
- `ft_is_max_nbr`: Check if a string represents the maximum possible integer.
- `ft_bits_to_char`: Convert a sequence of bits into a char character.
- `ft_char_to_bits`: Convert a char character into a sequence of bits.
- `ft_is_max_nbr`: Check if a string represents the maximum possible integer value.
- `ft_is_min_nbr`: Check if a string represents the minimum possible integer value.
- `ft_printf`: A custom implementation of the printf function for formatted output.
For detailed descriptions of each function, see their respective source code files.

## Usage

You can include the `libft` library in your C projects and use its functions by including the `libft.h` header file. Here's an example:

```c
#include "libft.h"

int main() {
 int numbers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
 int max = ft_is_max_nbr(numbers);
 int min = ft_is_min_nbr(numbers);
 printf("Max: %d\n", max);
 printf("Min: %d\n", min);
 return 0;
}
```
output:
```bash
.>9$
.>1$
```
## Contributing
Contributions to this library are welcome. If you would like to add new functions, improve existing ones, or report issues, please open

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
