#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - fn that creates an array of chars
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: pointer to the created array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *pc;
unsigned int i;

pc = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
if (pc == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
pc[i] = c;
}
return (pc);
}
