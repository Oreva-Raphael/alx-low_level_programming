#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints variable number of strings
* @separator: separates printed strings
* @n: number of variable strings expected to be passed to the function
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
		{
			printf("nil");
		}
		printf("%s", str);
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
