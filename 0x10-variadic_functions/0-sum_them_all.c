#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a funtion that sums all args passed to it
 * @n: the number of args passed
 *@...: variable arguments
 * Return: sum of all args passed
 */


int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;

va_list args;

if (n == 0)
{
return (0);
}


va_start(args, n);

for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
sum = sum + x;
}

va_end(args);
return (sum);
}
