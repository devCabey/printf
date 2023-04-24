#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - prints a character
 *
 * @arg: va_list argument
 *
 * @f: function pointer
 *
 * Return: An integer
 */

int print_char(va_list arg, sel_t *f)
{
    (void)f;
    _putchar(va_arg(arg, int));
    return (1);
}


/**
 * print_string - Prints a string to standard output
 *
 * @s: A string
 *
 * Return: An integer
 */

int print_string(va_list arg, sel_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;
	if (s == NULL)
		s = "(null)";

	while (s &&  s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
