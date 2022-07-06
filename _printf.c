#include "printf.h"
#include <stdarg>
#include <stddef.h>

/**
 * _printf - prints a formated string
 * @format: the string to format
 * Return : 0
 */
_printf(const char *format, ...)
{
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		    get_print(format[i + 1]);

		if (get_print(format[i + 1] == 0))
			    i += 2;

		    _putchar(format[i]);
		    i++;
	}
}
