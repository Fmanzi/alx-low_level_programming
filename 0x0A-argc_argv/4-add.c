#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - the main function
 * @argc: args count
 * @argv: array of args passed
 * Return: (0)
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;
int j;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

char *arg = argv[i];

for (j = 0; arg[j] != '\0'; j++)
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (-1);
}
}

sum = sum + atoi(arg);
}
printf("%d\n", sum);
return (0);
}
