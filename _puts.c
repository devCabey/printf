#include "main.h"

/**
 * _puts - prints a string
 *
 * @s: pointer to the string
 *
 * Return: An integer
 */

int _puts(char *s)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
