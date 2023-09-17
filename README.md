# Project of the printf Function
## Introduction to the _printf Function
The _printf function, short for "print formatted," is a versatile function that outputs formatted data to the standard output stream. It operates as a variadic function, meaning it can accept a variable number of arguments. The function takes a format string as its first argument, followed by any number of arguments corresponding to the placeholders in the format string. The format string contains both ordinary characters and format specifiers, which are special placeholders defining the desired output format for each argument. In essence, the _printf function is used to display various data types, format strings, and control the output format.

The function analyzes the format string, processes each format specifier, performs the necessary conversions, and applies formatting operations. Subsequently, it prints the formatted output to the standard output stream. Upon successful execution, the function returns the count of characters printed, and in case of an error, a negative value.

Format specifiers in the format string are identified by the '%' character, followed by a conversion specifier that dictates how the associated argument should be formatted. Commonly used conversion specifiers include %d for integers, %s for strings, %c for characters, %f for floating-point numbers, and %p for pointers.

The _printf function supports a range of formatting options within format specifiers, including width, precision, and flags. These options can be specified to control the appearance of the output, enabling you to align the output, specify decimal places for floating-point numbers, and more.

It's crucial to note that the _printf function is not a standard library function but rather a simplified implementation inspired by the printf function found in the C standard library. It offers fundamental formatting capabilities and doesn't encompass the full functionality and intricacy of the standard printf function.

## Project Requirements
### General
- Text editors allowed for code development: vi, vim, emacs.
Compilation of all code files will be performed on Ubuntu 20.04 LTS using gcc, with the following compiler options: -Wall -Werror -Wextra -pedantic -std=gnu89.
- Each code file should end with a new line.
- A README.md file must be present at the root of the project folder.
- Code should adhere to the Betty style, and it will be verified using betty-style.pl and betty-doc.pl.
- Global variables are not allowed.
- Each code file should contain no more than 5 functions.
- The provided main.c files in the examples are for testing purposes, and you are not required to include them in your repository.
- All function prototypes must be included in a header file named main.h.
- Ensure to include and push your header file.
- Implement include guards in all header files.
- The project will not provide the _putchar function; you need to create it.

/*
* File: printf
* Auth: Amanda Madlingozi | Sbusiso Mawayi
*       rjmadlingozi@gmail.com | u20451769@tuks.co.za
*/
