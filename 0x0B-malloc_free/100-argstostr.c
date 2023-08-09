#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of the program.
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int total_length = 0, arg, index, str_len, i = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
str_len = 0;
while (av[arg][str_len] != '\0')
{
str_len++;
total_length++;
}
total_length++; /* For the new line character */
}

concatenated = malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
index = 0;
while (av[arg][index] != '\0')
{
concatenated[i] = av[arg][index];
i++;
index++;
}
concatenated[i] = '\n';
i++;
}
concatenated[i] = '\0';

return (concatenated);
}
