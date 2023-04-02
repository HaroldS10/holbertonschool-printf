#include "main.h"

/**
 * get_cases_type - Gets an appropriate conversion function
 * according to the case that is found
 * @arg: Pointer 
 */

int (*get_cases_type(char *arg))(va_list, char *, int)
{
	int i = 0;
	print_cases formats[] = {
		{"c", case_ch},
		{"s", case_str},
		{"%", perc_case},
		{"d", case_dec},
		{"i", case_dec},
		};

	while (i < 5)
	{
		if (*arg == *(formats[i]).pfcase)
			return ((formats[i].convfun));
		i++;
	}
	return (NULL);
}
