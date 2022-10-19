#include "main.h"

/**
 * _putchar - print character
 * @c: the character to be printed
 *
 * Return: 1 (success)
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{	
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}

	return (1);
}

/**
 * _puts - print string
 * @str: string to be printed
 *
 * Return: lenght of string
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);	
	}

	return (i);
}
