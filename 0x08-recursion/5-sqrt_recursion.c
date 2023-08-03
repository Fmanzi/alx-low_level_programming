#include "main.h"

/**
 * sqrt_recursive - Helper function to find the square root recursively.
 * @n: The number for which the square root is to be found.
 * @start: The starting value to search for the square root.
 *
 * Return: The natural square root of the number or -1 if not found.
 */
int sqrt_recursive(int n, int start)
{
if (start * start == n)
return (start);

if (start * start > n)
return (-1);

return (sqrt_recursive(n, start + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be found.
 *
 * Return: The natural square root of the number or -1 if not found.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqrt_recursive(n, 0));
}
