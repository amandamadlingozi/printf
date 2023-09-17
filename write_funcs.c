#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a single character to the standard output.
 * @c: The character to be written.
 *
 * This function writes the character 'c' to the standard output.
 */
void _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - Writes a string to the standard output.
 * @str: The string to be written.
 *
 * This function writes the string 'str' to the standard output.
 */
void _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
