#include "main.h"
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words
 * @str: the string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int i, j, k, count, len, word_len;

if (str == NULL || *str == '\0')
return (NULL);

count = word_len = 0;
len = 1;
while (str[len] != '\0')
{
if (str[len] != ' ' && str[len - 1] == ' ')
count++;
len++;
}

words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

i = j = k = 0;
while (str[i] != '\0')
{
if (str[i] != ' ')
{
word_len++;
if (str[i + 1] == ' ' || str[i + 1] == '\0')
{
words[j] = malloc(sizeof(char) * (word_len + 1));
if (words[j] == NULL)
{
for (; j >= 0; j--)
free(words[j]);
free(words);
return (NULL);
}
word_len = 0;
k = 0;
while (str[i] != ' ' && str[i] != '\0')
{
words[j][k] = str[i];
k++;
i++;
}
words[j][k] = '\0';
j++;
}
}
else
{
i++;
}
}
words[j] = NULL;

return (words);
}
