#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - prints a character
 *
 * @arg: va_list argument
 *
 * @f: A pointer
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
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_string(va_list arg, sel_t *f)
{
	char *s = va_arg(arg, char *);

	(void)f;
	if (s == NULL)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_percent - Prints the percentage sign
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return An integer
 */

int print_percent(va_list arg, sel_t *f)
{
	(void)f;
	(void)arg;

	return (_putchar('%'));
}
