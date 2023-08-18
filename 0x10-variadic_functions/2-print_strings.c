#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a funct that prints strings
 * @separator: Separator string
 * @n: The number of strings passed
 * @...: The variable number of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
const char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);

if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
