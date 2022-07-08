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
	int len;
	int len2;

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);

}
