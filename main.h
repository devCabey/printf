#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct flags - struct for flags
 *
 * @pl: An integer
 *
 * @sp: An integer
 *
 * @ha: An integer
 *
 * Description: A struct
 */

typedef struct flags
{
    int pl;
    int sp;
    int ha;
} sel_t;

/**
 * struct function_selector - struct to select  a function
 *
 * @c: A character
 *
 * @f: function pointer
 *
 * Description: A struct
 */

typedef struct function_selector
{
    char c;
    int (*f)(va_list ap, flags_t *f);
} fs;

/* Function Selector */
int (*select_func(char s))(va_list arg, sel_t *);


/* Printf Function */
int _printf(const char *format, ...);


/* Functions to print alphabet */
int print_string(char *s);
int print_char(char c);
#endif
