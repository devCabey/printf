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
	char c;
	char *s;
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
				c = va_arg(args, int);
				if (c)
				{
					_putchar(c);
					wc++;
				}
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (s && s != NULL)
				{
					sc = print_string(s);
					wc += sc;
				}
			}
			else if (format[i] == '%')
			{
				_putchar(format[i]);
				wc++;
			}
			else
				return (-1);
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
