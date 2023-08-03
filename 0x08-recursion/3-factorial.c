#include "main.h"

/**
 * factorial - a func that returns the factorial of a given number.
 * @n: The number for which the factorial is to be calculated.
 *
 * Return: The factorial of the number or -1 for error (if n is lower than 0).
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (1);

return (n * factorial(n - 1));
}
