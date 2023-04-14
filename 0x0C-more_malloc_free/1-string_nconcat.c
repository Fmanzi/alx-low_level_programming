#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - a func to concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: Number of bytes of s2 to concatenate
 * Return: Pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, concat_len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
concat_len = len1 + n + 1;
concat = malloc(concat_len *sizeof(char));
if (concat == NULL)
return (NULL);
strcpy(concat, s1);
strncat(concat, s2, n);
return (concat);
}
