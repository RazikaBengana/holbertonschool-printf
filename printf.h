#ifndef printf_h
#define printf_h
typedef struct print
{
	char *conv;
	int (*f)(char *str);
} print_t;

int _printf(const char *format, ...);
int (*get_print(char s))(char *str);
#endif
