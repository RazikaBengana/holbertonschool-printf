#include "main.h"

/**
 * print_s - Prints the first argument of a list, a string
 * @args: The variable list of arguments received
 *
 * Return: The number of printed characters
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int length = 0;
	int i;

	if (str == NULL)
		str = "(null)";

	while (str[length])
	{
		length++;
	}

	for (i = 0; i < length; i++)
		_putchar(str[i]);

	return (length);
}
