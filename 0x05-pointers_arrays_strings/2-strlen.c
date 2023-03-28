#include "main.h"

/**
 * _strlen - Count the number of string
 *
 * @s: input variable
 *
 * Return: it returns an integer
 */

int _strlen(char *s)
{
int string_length = 0;
while(s[string_length])
	string_length++;
return (string_length);
}
