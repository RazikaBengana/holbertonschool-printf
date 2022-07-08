#include "main.h"

/**
 * print_c - Prints the current argument of a va_list, a char
 * @args: List of arguments
 *
 * Return: 1
 */

int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
