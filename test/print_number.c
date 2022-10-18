#include "main.h"

/**
 * print_num - recursive function that prints the remainder of number
 * @num: the number
 * @count: counting the number of characters to be printed
 *
 * Return: total numbers of characters
 */

int print_num(unsigned int num, int count)
{
	print_num((num / 10), ++count);

	_putchar('0' + (num % 10));
	return (count);
}


/**
 * print_i - print integers
 * @args; variadic function
 *
 * NB: There is no difference between the %i & %d format specifiers for printf
 * Return: total number of Characters Printed
 */
int print_i(va_list args)
{
	unsigned int _num;
	int num, c;
	
	num = va_arg(args, int);

	if (num < 0)
	{
		_num = -num;
		_putchar('-');
	}

	else
	{
		_num = num;
	}
	c = print_num(_num, 1);

	return (c);
}
