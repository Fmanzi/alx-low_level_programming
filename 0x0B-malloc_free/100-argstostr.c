#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a funtion that concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: A pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = 0, total_len = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;

total_len += len;
len = 0;
}

str = malloc(sizeof(char) * total_len + 1);
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

return (str);
}
