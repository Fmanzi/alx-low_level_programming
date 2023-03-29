#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 *
 * @c: char to print
 *
 * Return: 1 on success
 */
int _purchar(char c)
{
	return(write(1, &c, 1));
}
