#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a fn that concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector (array of strings)
 * Return: pointer to the concatenated string, NULL on failure.
 */

char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j, len = 0, total_len = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
total_len += len + 1;
len = 0;
}
concatenated = malloc(sizeof(char) * total_len + 1);
if (concatenated == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[len] = av[i][j];
len++;
}
concatenated[len] = '\n';
len++;
}
concatenated[len] = '\0';
return (concatenated);
}
