#include "main.h"

/**
 * get_digits - Calculates the digits of a number
 * @n: The number to calculate digits of
 *
 * Return: The number of digits of n
 */
int get_digits(unsigned int n)
{
	int digits = 0;

	do {
		n /= 10;
		++digits;
	} while (n != 0);

	return (digits);
}

/**
 * print_n - Prints an unsigned integer
 * @n: The number to print
 */
void print_n(unsigned int n)
{
	if (n / 10 != 0)
		print_n(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_int - Prints any integer, positive or negative
 * @n: The number to print
 *
 * Return: The number of digits of the integer ("-" included)
 */
int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		count++;
	}

	print_n((unsigned int) n);
	count += get_digits((unsigned int) n);

	return (count);
}
