#include "main.h"

/**
 * print_address - prints address
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_address(va_list arg, sel_t *f)
{
	unsigned long int a = va_arg(arg, unsigned long int);
	char *s;
	int wc = 0;

	(void)f;

	if (!a)
		return (_puts("(nil)"));
	s = converter(a, 16, 1);
	wc += _puts("0x");
	wc += _puts(s);

	return (wc);
}
