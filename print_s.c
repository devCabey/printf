#include "main.h"

/**
 * print_S - Print a character
 *
 * @arg: va_list argument
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_S(va_list arg, sel_t *f)
{
	char *s = va_arg(arg, char *);
	int i, wc = 0;
	char *r;

	(void)f;
	if (!s)
		return (_puts("(null)"));

	while (s[i])
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			wc += 2;
			r = converter(s[i], 16, 0);
			if (!r[1])
				wc += _putchar('0');
			wc += _puts(r);
		}
		else
			wc += _putchar(s[i]);
		i++;
	}

	return (wc);
}
