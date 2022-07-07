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
	int char_count = 0;
	va_list args_printf;

	va_start(args_printf, format);


	while (format && format[i])
	{
		if (format[i] == '%')
		{
			s = 1;

			s = get_print(format[i + 1])(args_printf);

			if (!s)
				s = 1;

			char_count += s;
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			char_count++;
			i++;

		}
	}

	va_end(args_printf);

	return (char_count);
}
