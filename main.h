#ifndef printf_h
#define printf_h
#include <stdarg.h>
#include <stddef.h>

/**
 * @c: The conversion identifier
 * @f: A pointer to the function associated to the identifier
 */
typedef struct print
{
	char c;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print(const char id))(va_list);
int print_c(va_list);
int print_s(va_list);
#endif