#include "main.h"
/**
 **_memset - called function
 * @b: char to be copied
 * @s: area of memory to be filled
 * @n: counter variable
 * Return: returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
while (i < n)
{s[i] = b;
i++;
}
return (s);
}
