#include "main.h"

int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
