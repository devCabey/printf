#include "main.h"

/**
 * converter - converts number and base to string
 *
 * @n: An integer
 *
 * @b: An integer
 *
 * @l: An integer
 *
 * Return: A string
 */

char *converter(unsigned long int n, int b, int l)
{
	static char *r;
	static char buffer[50];
	char *ptr;

	r = (l)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = r[n % b];
		n /= b;
	} while (n != 0);

	return (ptr);
}
