#include "printf.h"

/**
 * get_print - select the right print
 * @s: the conversion specifier
 *
 * Return: a pointer to the function that corresponds to s, NULL otherwise
 */
int (*get_print(char s))(char *str)
{
	print_t convs[] = {
		{"c", print c},
		{"s", print s},
		{NULL, NULL}
	}
