#include "main.h"

/**
 * check_identifier - Checks if the provided identifier char is accepted
 * @c: The identifier to validate
 *
 * Return: 0 if valid identifier, 1 otherwise
 */
int check_identifier(char c)
{
	char ids[] = {
		'c',
		's',
		'd',
	};

	int i = 0;

	while (ids[i])
	{
		if (ids[i] == c)
			return (0);

		i++;
	}

	return (1);
}
