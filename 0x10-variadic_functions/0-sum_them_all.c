#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - function to calc sum
 *@n: length of args
 *
 *Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int total = 0;
va_list arg_list;

if (n == 0)
{
return (0);
}
va_start(arg_list, n);

for (i = 0; i < n; i++)
{
int x = va_arg(arg_list, int);
total = total + x;
}

va_end(arg_list);
return (total);
}
