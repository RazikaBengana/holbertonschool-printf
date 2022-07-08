#include "main.h"
#include <stdio.h>

/**
 * main - Prints a string
 *
 * Return: 0 if success
 */
int main(void)
{
	char *testing = "TEST";
	int testagain = 654;

	int s = _printf("test1: %s, test2: %ss, test3: %dok", testing, testing, testagain);

	printf("\n------- Nombre de caractères : ------------\n");
	printf("%d\n", s);

	_printf("test_n'existe pas: %r\nmême à la fin%");

	int k = _printf("Hello, I'm %s", "Jose\n");
	printf("\n------ Nombre de caractères : ---------- \n");
	printf("%d\n", k);

	return (0);
}
