#include "main.h"

/**
 * print_percent - Ignores a va_list to print a simple percent instead
 * @args: The va_list to ignore
 *
 * Note: We ignore the va_list because the percent if not a real identifier
 * it only prints itself. So if we have %% we print %.
 *
 * Return: 1, the number of characters printed (%)
 */
int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
