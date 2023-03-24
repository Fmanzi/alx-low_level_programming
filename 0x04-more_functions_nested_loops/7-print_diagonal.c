#include "main.h"

/**
 * print_diagonal - it print lines
 *
 * @n: input value of print_line
 *
 */

void print_diagonal(int n)
{
	int num;
	int b;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (b = 0; b < num; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
