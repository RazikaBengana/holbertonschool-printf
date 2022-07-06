#ifndef printf_h
#define printf_h
typedef struct print
{
	char *c;
	int (*f)(char *str);
} print_t;

int _printf(const char *format, ...);
int (*get_print(const char *id, char *str);

#endif
