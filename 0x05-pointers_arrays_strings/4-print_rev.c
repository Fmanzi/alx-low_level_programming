#include "main.h"

/**
 * print_rev - it prints the reverse of a string
 *
 * @s: input variable
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int start = 0;
	
	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
