#include "main.h"
#include <stdarg>
#include <stddef.h>

/**
 * _printf - prints a formated string
 * @format: the string to format
 * Return : 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int char_count = 0;
	va_list args_printf;

	va_start(args_printf, format);

	while (format && format[i])
	{
		int s = -1;

		if (format[i] == '%')
			s = (*get_print(format[i + 1])(args_printf));

		if (s == 0)
		{
			char_count += s;
			i += 2;
		}

		_putchar(format[i]);
		char_count++;
		i++;
	}

	va_end(args_printf);
}
