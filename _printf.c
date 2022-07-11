#include "main.h"
#include <stdio.h>

/**
 * _printf - prints a formated string
 * @format: the string to format
 *
 * Return: The number of printed characters if success, -1 otherwise
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;
	int is_identifier;
	int char_total = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			is_identifier = check_identifier(format[i + 1]);
			if (!is_identifier)
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
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			char_total++;
			i++;
		}
		else
		{
			break;
		}
	}
	va_end(args);
	if (char_total == 0)
		return (-1);
	return (char_total);
}
