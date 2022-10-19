#include "main.h"

/**
 * print_u -  An unsigned Integer means the variable can hold only a positive
 * @args: variadic foundation
 *
 * Return: total characters printed
 */
int print_u(va_list args)
{
	int c;
	unsigned int num;

	num = va_arg(args, unsigned int);

	c = print_num(num, 10, 1);

	return (c);
}

/**
 * print_o - prints the octal equivalent of a number
 * @args: variadic function
 *
 * Return: total charactes printed
 */
int print_o(va_list args)
{
	int c;
	char *str;
	unsigned int num;

	num = va_arg(args, unsigned int);

	/* convert to octal */
	str = convert(num, 8, 1);

	c = _puts(str);

	return (c);
}


/**
 * print_x - print hexadecimal value of character
 * The letters abcdef are used for x
 * @args: variadic function
 *
 * Return: total number of character
 */
int print_x(va_list args)
{
	unsigned int num, c;
	char *str;

	num = va_arg(args, unsigned int);

	str = convert(num, 16, 1);

	c = _puts(str);
	return (c);
}

/**
 * print_X - print hexadecimal value of character
 * The letters are ABCDEF are used for X
 * @args: variadic function
 *
 * Return: to total number of vharacter
 */
int print_X(va_list args)
{
	unsigned int num, c;
	char *str;

	num = va_arg(args, unsigned int);

	str = convert(num, 16, 0);
	c = _puts(str);

	return (c);
}
