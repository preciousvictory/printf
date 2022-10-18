#include "main.h"

int get_func(char spec, va_list args)
{
	int i;

	prints spec_func[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	for (i = 0; spec_func[i].p != NULL; i++)
	{
		if (spec_func[i].p[0] == spec)
		{
			printf("%s", 
			int (*print_func)(va_list) = spec_func[i].print;
			print_func(args);
		}
		break;
	}
	return (0);
}
