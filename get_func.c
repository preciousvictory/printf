#include "main.h"

/**
 * get_func -  this function point to a function based of its specifier
 * @spec: the specifer
 *
 * Return: function pointer that points to the specifier's funcion
 */

int (*get_func(char spec))(va_list)
{
	int i;

	prints spec_func[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", percent},
		{NULL, NULL}
	};

	for (i = 0; spec_func[i].p != NULL; i++)
	{
		if (spec_func[i].p[0] == spec)
		{
			return (spec_func[i].print);
		}
	}
	return (0);
}
