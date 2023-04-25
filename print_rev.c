#include "main.h"

/**
 * print_rev - Print string in reverse
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_rev(va_list arg, sel_t *f)
{
	int i = 0, j;
	char *s = va_arg(arg, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
