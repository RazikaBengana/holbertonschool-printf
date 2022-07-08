#include "main.h"

/**
 * get_print - Selects the right print
 * @id: The conversion specifier
 *
 * Return: A pointer to the right print to use according to char
 */

int (*get_print(char id))(va_list)
{
	print_t ids[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'%', print_percent}
	};

	int i;

	i = 0;

	while (ids[i].c != id)
		i++;

	return (ids[i].f);
}
