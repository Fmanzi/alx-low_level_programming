#include "main.h"
#include <stdio.h>
/**
 * main - The Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int x = argc;
char **list = argv;

printf("%s \n", list[0]);

return (0);
}
