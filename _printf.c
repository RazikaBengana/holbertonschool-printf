#include "main.h"
#include <stdio.h>

/**
 * _printf - prints a formated string
 * @format: the string to format
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int printed;
	int is_identifier;
	int char_total = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			is_identifier = check_identifier(format[i + 1]);

			if (is_identifier == 1)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				printed = 2;
			}
			else
			{
				printed = get_print(format[i + 1])(args);
			}

			char_total += printed;
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			char_total++;
			i++;
		}
	}

	va_end(args);
	return (char_total);
}
