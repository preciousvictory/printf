#include "main.h"

int get_func(char spec, va_list args);


/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string
 *
 * write output to stdout, the standard output stream
 * Returns: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;
	char str;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != ' ')
		{
			str = format[i];
			printf("%c---", str);
			len += get_func(str, args);
		}
		else
		{	
			_putchar(format[i]);
		}
	}

	va_end(args);
	return (len);
}
