#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_all - print everything
 * @* - pointer
 * @format - does something
 */
void print_all(const char *const format, ...)
{
	va_list arg_list;

	va_start(arg_list, format);

	char specifiers[] = {'c', 'i', 'f', 's'};
	void (*functions[])(va_list) = {print_char, print_int, print_float, print_string};

	int i = 0;
	while (format[i])
	{
		int j = 0;
		int match_found = 0;

		while (j < sizeof(specifiers))
		{
			if (format[i] == specifiers[j])
			{
				functions[j](arg_list);
				match_found = 1;
				break;
			}
			j++;
		}

		if (match_found && format[i + 1] != '\0')
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
	va_end(arg_list);
}
