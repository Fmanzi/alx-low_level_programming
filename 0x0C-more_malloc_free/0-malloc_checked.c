#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If malloc fails, terminates process with status 98.
 */

void *malloc_checked(unsigned int b)
{

void *address;

if (b <= 0)
{
exit(98);
}


address = malloc(b);
if (address == NULL)
{
exit(98);
}
return (address);
}
