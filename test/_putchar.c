#include "main.h"

/**
 * _putchar - print character
 * @c: the character to be printed
 *
 * Return: the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
