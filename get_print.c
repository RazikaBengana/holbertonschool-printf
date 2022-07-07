#include "main.h"

/**
 * get_print - Selects the right print
 * @id: The conversion specifier
 *
 * Return:
 *	A pointer to the right print to use according to char
 *	NULL otherwise
 */

int (*get_print(const char id))(va_list)
{
	print_t ids[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};

	int i;

	i = 0;

	while (ids[i].c)
	{
		if (ids[i].c == id)
			return (ids[i].f);

		i++;
	}

	return (NULL);
}
