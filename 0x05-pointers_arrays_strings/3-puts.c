#include "main.h"

/**
 * _puts - It print out the string to the stdout
 *
 * @str: input variable
 *
 * Return: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
