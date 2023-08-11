#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
int i, j, len1, len2, len_res, carry, product;
int *result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

len1 = 0;
while (argv[1][len1])
{
if (argv[1][len1] < '0' || argv[1][len1] > '9')
{
printf("Error\n");
return (98);
}
len1++;
}

len2 = 0;
while (argv[2][len2])
{
if (argv[2][len2] < '0' || argv[2][len2] > '9')
{
printf("Error\n");
return (98);
}
len2++;
}

len_res = len1 + len2;
result = malloc(sizeof(int) * len_res);
if (result == NULL)
{
printf("Error\n");
return (98);
}

for (i = 0; i < len_res; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
product = (argv[1][i] - '0') * (argv[2][j] - '0') + carry + result[i + j + 1];
carry = product / 10;
result[i + j + 1] = product % 10;
}
result[i + j + 1] = carry;
}
if (result[0] == 0)
i = 1;
else
i = 0;

for (; i < len_res; i++)
printf("%d", result[i]);

printf("\n");
free(result);

return (0);
}
