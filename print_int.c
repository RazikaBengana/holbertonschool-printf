#include "main.h"

/**
 * print_int - Prints any integer, positive or negative
 * @n: The number to print
 *
 * Return: The number of digits of the integer ("-" included)
 */
int print_int(int n)
{
	int temp;
	int temp_multiplier;
	int count = 0;
	int last;

	if (n < 0)
	{
		n *= -1;

		_putchar('-');
		count++;
	}

	last = n % 10;

	while (n > 10)
	{
		temp = n;
		temp_multiplier = 1;

		while (temp > 10)
		{
			temp /= 10;
			temp_multiplier *= 10;
		}

		_putchar(temp + '0');
		n %= temp_multiplier;
		count++;
	}

	_putchar(last + '0');
	count++;

	return (count);
}
