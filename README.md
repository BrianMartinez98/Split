# Libft

Custom C standard library implementation developed as part of the 42 curriculum.

This was my first project at 42. The repository is kept close to the original implementation so it can show progression over time, with only light cleanup and small maintenance corrections applied for public review.

## About

`libft` recreates a subset of standard C library functions and adds linked-list utilities used in later 42 projects.

Main topics:

- Character checks and conversions
- Memory manipulation
- String manipulation
- File descriptor output helpers
- Dynamic allocation helpers
- Linked-list utilities
- Makefile-based static library compilation

## Build

```bash
make
```

This creates:

```text
libft.a
```

Build the bonus linked-list functions:

```bash
make bonus
```

Clean object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild from scratch:

```bash
make re
```

## Notes

This repository is a cleaned public version of an early 42 project. The goal is not to present a modern C library, but to document the foundation of my C programming work and show technical progression across later projects.
