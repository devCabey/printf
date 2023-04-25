#include "main.h"

/**
 * print_hex - prints a number in hexadecimal lowercase
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_hex(va_list arg, sel_t *f)
{
	unsigned int n = va_arg(arg, unsigned int);
	char *s = converter(n, 16, 1);
	int wc = 0;

	if ((*f).ha == 1 && s[0] != '0')
		wc += _puts("0x");
	wc += _puts(s);
	return (wc);
}
