#include "main.h"
/**
 *_strpbrk - The called function
 *@s: the input
 *@accept: the input
 *Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s != '\0')
{
for (p = accept; *p != '\0'; p++)
{
if (*s == *p)
{
return (s);
}
}
s++;
}
return (NULL);
}
