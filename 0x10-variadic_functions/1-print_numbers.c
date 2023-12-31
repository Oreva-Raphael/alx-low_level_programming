#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
* print_numbers - prints numbers with a separator
* @separator: selimeter to separate the numbers when printing
* @n: number of expected variable arguments
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
