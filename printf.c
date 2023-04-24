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
	int (*new_func)(va_list, sel_t *);
	const char *ptr;
	va_list args;
	sel_t flags = {0, 0, 0};
	int wc = 0;
	
	va_start(args, format);
	
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*p == '%')
			{
				wc += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				ptr++;
			new_func = select_func(*ptr);
			wc += (new_func)
				? new_func(args, &flags)
				: _printf("%%%c", *ptr);
		}
		else
			wc += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	
	return (wc);
}
}
