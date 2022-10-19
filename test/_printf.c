#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string
 *
 * write output to stdout, the standard output stream
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	char str;
	int (*p_func)(va_list);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			str = format[i];
			p_func = get_func(str);
			count += p_func(args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
