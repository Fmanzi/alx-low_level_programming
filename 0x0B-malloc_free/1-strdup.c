#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new duplicate string.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0, i;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}
