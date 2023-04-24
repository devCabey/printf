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
	int i;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] ==  '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i += 2;
			}
			else if (format[i + 1] == 's')
			{
				print_string(va_arg(args, char *));
				i += 2;
			}
			else
			{
				_putchar(format[i]);
				i++;
			}

		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(args);

	return (i);
}
