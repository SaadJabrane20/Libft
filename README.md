# Libft

> My implementation of a custom C standard library, developed as part of the 1337 Coding School / 42 Common Core curriculum.

## 📖 About

**Libft** is a foundational C project where I recreate commonly used functions from the C standard library and build additional utility functions from scratch.

The project focuses on understanding how these functions work internally while strengthening my knowledge of:

* C programming
* Pointers and pointer manipulation
* Strings and character handling
* Memory allocation and management
* Raw memory operations
* File descriptors
* Function pointers
* Linked lists
* Edge-case handling

The resulting library can be reused in future C projects throughout the 42/1337 curriculum.

## 🛠️ Functions

### Part 1 — Libc Functions

Reimplementations of commonly used C standard-library functions, including:

* Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* String functions: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* Conversion functions: `ft_atoi`, `ft_calloc`, `ft_strdup`
* Additional utility functions required by the project

### Part 2 — Additional Functions

Additional utility functions for manipulating strings and memory:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Bonus — Linked Lists

The bonus section introduces linked-list data structures and operations using the `t_list` structure.

It covers operations such as:

* Creating nodes
* Adding nodes to the front and back
* Traversing lists
* Finding the last node
* Counting nodes
* Deleting and clearing nodes
* Iterating through lists
* Creating transformed lists

## ⚙️ Compilation

The library is compiled using the provided `Makefile`.

```bash
make
```

This generates:

```text
libft.a
```

### Available commands

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Clean and recompile
```

## 📦 Usage

Include the header in your C source file:

```c
#include "libft.h"
```

Then compile your program together with the library:

```bash
cc main.c -L. -lft
```

Or directly include the library archive:

```bash
cc main.c libft.a
```

## 🧪 Testing

I test the implementations against the behavior of their standard-library counterparts whenever possible.

Testing focuses on:

* Normal inputs
* Empty strings
* Boundary values
* Different buffer sizes
* `NULL` handling where applicable
* Memory allocation failures
* Overlapping memory regions
* Integer limits
* Memory leaks

Tools such as `valgrind` can be used to detect memory leaks and invalid memory access:

```bash
valgrind --leak-check=full ./program
```

## 🧠 What I Learned

Libft helped me move beyond simply writing C syntax and start thinking about how memory and data are actually handled.

Some of the most important concepts I practiced were:

```text
Pointers
   ↓
Memory addresses
   ↓
Raw memory manipulation
   ↓
Dynamic allocation
   ↓
Strings & buffers
   ↓
Function pointers
   ↓
Linked lists
```

The project also reinforced the importance of understanding **memory ownership**, correct allocation sizes, null termination, and freeing dynamically allocated memory.

## 📚 Project Context

**School:** 1337 Coding School
**Program:** Common Core
**Project:** Libft
**Language:** C

---

⭐ This project is part of my journey through the 1337 Common Core, where I'm building a stronger foundation in software engineering, algorithms, systems programming, and cybersecurity.
