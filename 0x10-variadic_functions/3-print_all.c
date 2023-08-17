#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *all = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", all, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", all, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", all, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", all, str);
					break;
				default:
					i++;
					continue;
			}
			all = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
