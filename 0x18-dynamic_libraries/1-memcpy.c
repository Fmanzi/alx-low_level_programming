#include "main.h"
/**
 * _memcpy - function to copy memory area
 * @dest: the destination
 * @src: the source
 * @n: limit
 * Return: returns copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_start = dest;
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest_start);
}
