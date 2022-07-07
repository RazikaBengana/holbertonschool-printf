#include "main.h"

int print_s(va_list args_printf)
{
	char *str = va_arg(args_printf, char *);
	int length = 0;
	int i;

	while (str[length])
	{
		length++;
	}

	for (i = 0; i < length; i++)
		_putchar(str[i]);

	return (length);
}
