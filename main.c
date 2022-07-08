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
	int len, len2;

	len = _printf("%");
	len2 = printf("%");

	printf("len: %d, len2: %d", len, len2);
}
