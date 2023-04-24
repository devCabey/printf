#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Produce output according to the format
 *
 * @format: A character string
 *
 * Return: An integer
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, wc = 0, sc = 0;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] ==  '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				wc++;
				i += 2;
			}
			else if (format[i + 1] == 's')
			{
				sc = print_string(va_arg(args, char *));
				wc += sc;
				i += 2;
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				wc++;
				i += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			wc++;
			i++;
		}
	}
	va_end(args);

	return (wc);
}
