#include "main.h"

/**
 * times_table - a function that produces the times table
 *
 *
 * Return: Always 0 (success)
 *
 */


void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		int i;

	for (i = 0; i <= 9; i++)
	{
		int result = n * i;

		if (result <= 9)
		{
			_putchar(' ');
			_putchar(result + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}


		}
		else
		{
			_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');

	}
}
