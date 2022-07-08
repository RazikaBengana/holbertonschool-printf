#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a string
 *
 * Return: 0 if success
 */
int main(void)
{
	int n = 4205;

	int k = _printf("%d", n);
	printf("\ndigits: %d\n", k);
	return (0);
}
