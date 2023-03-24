#include "main.h"

/**
 * print_line - it print lines
 *
 * @n: input value of print_line
 *
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a = 0;

		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
