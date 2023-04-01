#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer to the string to be encoded.
 *
 * Return: pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char leet_letters[] = {'4', '3', '0', '7', '1'};
char regular_letters[] = {'a', 'e', 'o', 't', 'l'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == regular_letters[j] || str[i] == regular_letters[j] - 32)
{
str[i] = leet_letters[j];
}
}
}
return (str);
}
