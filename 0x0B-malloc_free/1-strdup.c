#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Function that duplicate a string in memory.
 * @str: Pointer to the string to be duplicated.
 * Return: Pointer to new memory
 * or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
char *dup;
size_t len;

if (str == NULL)
return (NULL);

len = strlen(str) + 1;

dup = (char *)malloc(len *sizeof(char));
if (dup == NULL)
return (NULL);

strcpy(dup, str);

return (dup);
}
