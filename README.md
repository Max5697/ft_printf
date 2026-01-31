*This project has been created as part of the 42 curriculum by thplemyu.*

## Description
the goal of this project is to recode the `printf()` function form the C standard library (libc). The function, name `ft_printf`, mimics the behavior of the original `printf` but focuses on a specific subset of format specifiers.

This project provides a deep understanding of **variadic functions** in C, memory management, and low-level I/O operations using the `write` system call.

**Supported Format Specifiers:**
- `%c` : Prints a single character.
- `%s` : Prints a string (as defined by the common c convention).
- `%p` : The `void *` pointer argument has to be printed in hexadecimal format.
- `%d` : Prints a decimal (base 10) number.
- `%i` : Prints an integer in base 10.
- `%u` : Prints an unsigned decimal (base 10) number.
- `%x` : Prints a number in hexadecimal (base 16) lowercase format.
- `%X` : Prints a number in hexadecimal (base 16) uppercase format.
- `%%` : Prints a percent sign.

## Instructions

### Compilation
To compile the library `libftprintf.a`, simply run the following command in your terminal:
```
make
```
## Resources

### References
- `man printf`: Primary reference for understanding expected behavior and output format.
- `man stdarg`: Documentation for handling variadic macros such as `va_start`,`va_arg`,and`va_end`

### AI Usande Disclosure
Generative AI (Gemini) was used in this project for the following task:
- Concept Clarification: Explining the mechanics of varidec functions and type promotion.
- Debugging: Identifying the specific behavior of `%p` with `NULL` pointer (printing `(nil)`) to ensure compliance with Linux-based testing requirements.
