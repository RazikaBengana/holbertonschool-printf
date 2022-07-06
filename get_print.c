#include "printf.h"

/**
 * get_print - Selects the right print
 * @id: The conversion specifier
 * @str: The string corresponding to id
 *
 * Return: The number of printed characters, NULL otherwise
 */
int get_print(const char *id, char *str)
{
	print_t ids[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	}

	int i;

	i = 0;

	while (ids[i].c)
	{
		if (ids[i].c == id)
			return (ids[i].f(str));

		i++;
	}

	return (NULL);
