#include "main.h"
/**
 *_strspn - the called function
 *@s:input
 *@accept: the input
 *Return: Always zero
 */


unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int match;
char *a;

while (*s != '\0')
{
match = 0;
for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
match = 1;
break;
}
}
if (!match)
{
break;
}
s++;
n++;
}
return (n);
}
