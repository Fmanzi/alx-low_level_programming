#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	char str[] = "_putchar";
	int getlength = strlen(str);

	for (n = 0; n < getlength; n++)
	{
		_putchar(str[n]);

	}

	_putchar('\n');
	return (0);

}
