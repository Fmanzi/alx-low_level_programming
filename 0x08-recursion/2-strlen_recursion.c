#include "main.h"

/**
 * _strlen_recursion -a func that returns the length of a string.
 * @s: The input string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
