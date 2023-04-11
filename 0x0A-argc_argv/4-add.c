#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments array
 * i:convert string a number
 * j:convert string a number
 * Return: 0 on Success, 1 Error
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;
int j;

for (i = 1; i < argc; i++)
{
char *arg = argv[i];

for (j = 0; arg[j] != '\0'; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(arg);
}

printf("%d\n", sum);

return (0);
}
