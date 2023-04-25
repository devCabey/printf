#include "main.h"

/**
 * print_binary - prints a number in base 2
 *
 * @arg: va_list paramenter
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_binary(va_list arg, sel_t *f)
{
	unsigned int n = va_arg(arg, unsigned int);
	char *s = converter(n, 2, 0);

	(void)f;
	return (_puts(s));
}
