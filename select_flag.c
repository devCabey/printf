#include "main.h"

/**
 * select_flag - Select flag
 *
 * @s: A char
 *
 * @f: A function pointer
 *
 * Return: An integer
 */

int select_flag(char s, sel_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			(*f).pl = 1;
			i = 1;
			break;
		case ' ':
			(*f).sp = 1;
			i = 1;
			break;
		case '#':
			(*f).ha = 1;
			i = 1;
			break;
	}
	return (i);
}
