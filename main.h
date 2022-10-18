#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);

int _putchar(char c);

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


int print_num(unsigned int num, int count);

#endif /* MAIN_H */
