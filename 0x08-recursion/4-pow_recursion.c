#include "main.h"

/**
 * _pow_recursion - func that returns the value of x raised to the power of y.
 * @x: base value.
 * @y: exponent.
 *
 * Return: x raised to the power of y.
 *         If y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
