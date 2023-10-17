#include "main.h"

/**
 * _puts - It print out the string to the stdout
 *
 * @str: input variable
 *
 * Return: string
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
