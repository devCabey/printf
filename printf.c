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
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
				wc++;
			}
			else if (format[i] == 's')
			{
				sc = print_string(va_arg(args, char*));
				wc += sc;
			}
			else if (format[i] == '%')
			{
				_putchar(format[i]);
				wc++;
			}
			i++;
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
