#include <stdlib.h>
#include "main.h"

/**
 * select_func - Select a particular function
 *
 * @c: A char
 *
 * Return: void
 */

void select_func(char c, va_list d)
{

	char handle = {'c', 's', '%'}
	int func = {_putchar, print_string, _putchar};
	int i;

	i = 0;
	while(handle[i])
	{
		if (handle[i] == c)
		{
			i == 1? func[i](va_arg(d, char *):func[i](va_arg(d, int));
			break;
		}
		i++;
	}

	
}
