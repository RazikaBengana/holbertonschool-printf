#include "main.h"
#include <stdio.h>

/**
 * main - Prints a string
 *
 * Return: 0 if success
 */
int main(void)
{
	int a = _printf("%%\n");
	int b = printf("%%\n");

	printf("a: %d et b: %d\n", a, b);
	return (0);
}
