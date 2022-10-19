#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);

/**
 * struct func - a struct to the function to printed
 * @p: the format specifier
 * @print: the fuction for the specifier
 */
typedef struct func
{
	char *p;
	int (*print)(va_list str);
} prints;

int (*get_func(char spec))(va_list);

/* All the format specifiers function */
int print_c(va_list args);
int print_s(va_list args);
int percent(va_list args);
int print_i(va_list args);
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_S(va_list args);



int print_num(unsigned int num, int base, int count);

char *convert(unsigned int num, int base, int _case);
#endif /* MAIN_H */
