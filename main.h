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
	int (*f)(va_list, sel_t *);
} fs;

/* Function Selector */
int (*select_func(char))(va_list, sel_t *);

/* Flag Selector */
int select_flag(char, sel_t *);

/* Printf Function */
int _printf(const char *, ...);


/* Functions to print alphabet */
int print_string(va_list, sel_t *);
int print_char(va_list, sel_t *);
int print_percent(va_list, sel_t *);
int _puts(char *s);
int _putchar(char c);

/** Functions to print numbers **/
int print_integer(va_list, sel_t *);
int print_unsigned(va_list, sel_t *);
int digit_counter(int);
void print_number(int);
char *converter(unsigned long int, int, int);
#endif
