#include "main.h"

/**
 * print_hex_alt - Prints a nmber in hexadecimal uppercase
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: an integer
 */

int print_hex_alt(va_list arg, sel_t *f)
{
	unsigned int n = va_arg(arg, unsigned int);
	char *s = converter(n, 16, 0);
	int wc = 0;

	if ((*f).ha == 1 && s[0] != '0')
		wc += _puts("0X");
	wc += _puts(s);
	return (wc);
}
