#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints arguments of various types
 * @format: format string specifying the types of arguments.
 * @...:  variable number of arguments.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
const char *fmt = format;

va_start(args, format);

while (fmt && fmt[i])
{
switch (fmt[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
default:
i++;
continue;
}

separator = ", ";
i++;
}

va_end(args);

printf("\n");
}
