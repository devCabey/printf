#include <stdlib.h>
#include "main.h"

/**
 * select_func - selects function to print
 *
 * @s: A character
 *
 * Return:  A function pointer
 */
int (*select_func(char s))(va_list, sel_t *)
{
	fs func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent}
	};

	int flags = 3;

	int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}