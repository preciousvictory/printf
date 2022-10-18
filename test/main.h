#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(int c);

/**
 * struct func - a struct to the function to printed
 * @p: the format specifier
 * @f: the fuction for the specifier
 */
typedef struct func
{
	char *p;
	int (*print)(va_list str);
} prints;

int get_func(char spec, va_list args);

/* All the format specifiers function */
int print_c(va_list args);
int print_s(va_list args);

#endif /* MAIN_H */
