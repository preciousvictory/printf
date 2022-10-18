#include "main.h"

/**
 * _putchar - print character
 * @char: the character to be printed
 *
 * Return: the character
 */

int _putchar(int c)
{
	return(write(1, &c, 1));
}
