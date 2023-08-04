#include <stdio.h>
#include "main.h"

/**
 *main - entry point function
 *@argc: int variable holding the total number of args
 *@argv: array of arguments string
 *Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
