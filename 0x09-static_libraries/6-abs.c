#include "main.h"

/**
 * _abs - a function that gets the absolute value
 *
 * @c: input of the function
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
