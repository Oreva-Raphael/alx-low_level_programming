#include "variadic_functions.h"
#include <stdio.h>

void print_value(char format, va_list arg)
{
    switch (format)
    {
    case 'c':
    {
        char c = va_arg(arg, int);
        printf("%c", c);
        break;
    }
    case 'i':
    {
        int num = va_arg(arg, int);
        printf("%d", num);
        break;
    }
    case 'f':
    {
        double f = va_arg(arg, double);
        printf("%f", f);
        break;
    }
    case 's':
    {
        char *str = va_arg(arg, char *);
        if (str == NULL)
        {
            str = "(nil)";
        }
        printf("%s", str);
        break;
    }
    default:
        break;
    }
}
