#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
* struct flags - Structure to hold flags that can be enabled with _printf()
* @plus: Flag for the '+' character
* @space: Flag for the ' ' character
* @hash: Flag for the '#' character
*/
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
* struct printHandler - Structure used to determine the appropriate
*                      printing function based on the format specifier.
* @c: Format specifier character
* @f: Pointer to the corresponding printing function
*/
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

char *convert(unsigned long int num, int base, int lowercase);
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

#endif
