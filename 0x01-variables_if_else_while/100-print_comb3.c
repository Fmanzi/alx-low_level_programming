#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * puts: it print to screen..
 */

int main(void)
{
	int i, j, count;
	count = 9;


	for (i = 0; i <= count; i++)
	{
		for (j = i + 1; j <= count; j++)
		{
			if (i < j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != count - 1)
				{
					putchar(',');
					putchar(' ');

				}

			}

		}

	}

	putchar('\n');
	return (0);
}
