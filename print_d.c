#include "main.h"

/**
 * print_d - Prints the first argument of a list, an integer
 * @args: The list of arguments received
 *
 * Return: The number of digits of the integer ("-" included)
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	int digits = print_int(n);

	return (digits);
}
