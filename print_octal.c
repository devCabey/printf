#include "main.h"

/**
 * print_octal - Print a number in octal
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_octal(va_list arg, sel_t *f)
{
	unsigned int n = va_arg(arg, unsigned int);
	char *s = converter(n, 8, 0);
	int wc = 0;

	if ((*f).ha == 1 && s[0] != '0')
		wc += _putchar('0');
	wc += _puts(s);
	return (wc);
}
