#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
		{
			if (num % 5 == 0 && num % 3 == 0)
				printf("FizzBuzz\n");
			else if (num % 5 == 0)
				printf("Buzz\n");
			else if (num % 3 == 0)
			{
				printf("Fizz\n");
			}
			else
			{
				printf("%d\n", num);
			}
		}
		else
		{
			if (num % 5 == 0 && num % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (num % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (num % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", num);
			}
		}
	}
	return (0);
}
