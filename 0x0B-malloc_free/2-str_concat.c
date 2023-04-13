#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a fn that concatenates two strings
 * @s1: pointer to string s1
 * @s2: pointer to string s2
 * Return: pointer to the concatenated string or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
char *concatenated;
int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (j = 0; j < len2; j++)
concatenated[len1 + j] = s2[j];
concatenated[len1 + len2] = '\0';
return (concatenated);
}
