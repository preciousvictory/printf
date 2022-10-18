#include "main.h"

int print_c(va_list args);
int print_s(va_list args);

/**
 * print_c - print charcter
 * @args: variadic argument
 *
 * Return: total number of Characters Printed
 */
int print_c(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("dd");
	_putchar(i);
	return (1);
}

/**
 * print_s - print string
 * @args: variadic argument
 *
 * Return: total number of Characters Printed
 */
int print_s(va_list args)
{
	int l;
	char *str;

	str = va_arg(args, char *);
	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}

	return (l + 1);
}

/**
 * percent - print %
 * @args: variadic function
 *
 * Return: total number of Characters Printed
 */
int percent(va_list args)
{
	(void) args;

	_putchar('%');

	return (1);
}
