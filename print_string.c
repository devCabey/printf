#include "main.h"

/**
 * print_string - Prints a string to standard output
 *
 * @s: A string
 *
 * Return: An integer
 */

int print_string(char *s)
{
	int i = 0;

	while (s &&  s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
