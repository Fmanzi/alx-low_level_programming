#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - Function to print
 *@format: contains list of args
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s;
char c;
int ival;
float fval;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
ival = va_arg(args, int);
printf("%d", ival);
break;
case 'f':
fval = va_arg(args, double);
printf("%f", fval);
break;
case 's':
s = va_arg(args, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
break;
default:
break;
}
if (format[i + 1])
printf(", ");
i++;
}
va_end(args);
printf("\n");
}
