#include "main.h"

/**
 * print_integer - prints an integer
 *
 * @arg: A va_list argument
 *
 * @f: A pointer
 *
 * Return: Integer
 */

int print_integer(va_list arg, sel_t *f)
{
	int n = va_arg(arg, int);
	int wc = digit_counter(n);

	if ((*f).space == 1 && (*f).plus == 0 && n >= 0)
		wc += _putchar(' ');
	if ((*f).plus == 1 && n >= 0)
		wc += _putchar('+');
	if (n <= 0)
		wc++;
	print_number(n);

	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 *
 * @arg: va_list
 *
 * @f: A pointer
 *
 * Return: An integer
 */

int print_unsigned(va_list arg, sel_t *f)
{
	unsigned int n = va_arg(arg, unsigned int);
	char *str = convert(n, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - Print Numbers
 *
 * @n: integer to be printed
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * digit_counter - Counts the number of digits
 *
 * @n: An integer
 *
 * Return: An integer
 */

int digit_counter(int n)
{
	unsigned int wc = 0;
	unsigned int num;

	if (n < 0)
		num = n * -1;
	else
		num = n;
	while (num != 0)
	{
		num /= 10;
		wc++;
	}
	return (wc);
}
