#include "main.h"
#include <stdio.h>
/**
 * _strchr - the called function to check for char match
 *@s: the input
 *@c: character compared against
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
