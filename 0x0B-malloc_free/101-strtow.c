#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the words in a string.
 * @str: The input string
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0, i = 0;

while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
if (str[i] != '\0')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}
}

return (count);
}

/**
 * strtow - Splits a string  to words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count;

if (str == NULL || str[0] == '\0')
return (NULL);
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

i = 0;
j = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;

if (len > 0)
{
words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}

for (k = 0; k < len; k++)
words[j][k] = str[i + k];
words[j][len] = '\0';
j++;
i += len;
}
}
words[j] = NULL;
return (words);
}
