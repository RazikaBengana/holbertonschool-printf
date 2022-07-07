#include "main.h"

/**
 * _printf - prints a formated string
 * @format: the string to format
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int s;
	int char_total = 0;
	va_list args_printf;

	va_start(args_printf, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			s = get_print(format[i + 1])(args_printf);

			if (!s)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				s = 2;
			}

			char_total += s;
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			char_total++;
			i++;

		}
	}

	va_end(args_printf);

	return (char_total);
}
