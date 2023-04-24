#include "main.h"

/**
 * print_string - Prints a string to standard output
 *
 * @s: A string
 *
 * Return: Void
 */

void print_string(char *s)
{
	int i = 0;

	while (s &&  s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
