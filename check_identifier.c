#include "main.h"

/**
 * check_identifier - Checks if the provided identifier char is accepted
 * @c: The identifier to validate
 *
 * Return: 1 if valid identifier, 0 otherwise
 */
int check_identifier(char c)
{
	char ids[] = {
		'c',
		's',
		'd',
		'i',
		'%'
	};

	int i = 0;

	while (ids[i])
	{
		if (ids[i] == c)
			return (1);

		i++;
	}

	return (0);
}
