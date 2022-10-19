#include "main.h"

char *convert(unsigned int num, int base, int _case)
{
	char *str;
	static char buff[33];
	char *ptr = &buff[sizeof(buff)-1];
	*ptr = '\0';

	if (_case == 1)
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";


	do
	{
		*--ptr = str[num %base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
