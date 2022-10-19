#include "main.h"

/**
 * print_S - custom conversion specifier: prints the string.
 * @args: variadic function
 *
 * Retrun: total printed character
 */
int print_S(va_list args)
{
	int i, c = 0;
	char *str, *ptr;

	str = va_arg(args, char *);

	if (!str)
		_puts("(nil)");

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			c += _puts("\\x");
			
			ptr = convert(str[i], 16, 1);
			if (!ptr[1])
				c += _putchar('0');
			c += _puts(str);
		}
		else
			_putchar(str[i]);
	}
	return (c);
}
