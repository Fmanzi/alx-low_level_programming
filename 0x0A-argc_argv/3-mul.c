#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: int variable for number of arguments
 *@argv: array of input strings
 *x: string
 *y: string
 * Return: 0 on succes, 1 error
 */
int main(int argc, char *argv[])
{
int x, y;

if (argc != 3)
{
printf("error\n");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
