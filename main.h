#ifndef printf_h
#define printf_h
#include <stdarg.h>

/**
 * @c: The conversion identifier
 * @f: A pointer to the function associated to the identifier
 */
typedef struct print
{
	char *c;
	int (*f)(char *str);
} print_t;

int _printf(const char *format, ...);
int (*get_print(const char *id))(va_list);

#endif
