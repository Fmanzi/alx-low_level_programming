#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - funct to print a string
 *@separator: a string sepsrator
 *@n: length of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

