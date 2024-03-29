#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of int from min to max.
 * @min: Minimum value (inclusive).
 * @max: Maximum value (inclusive).
 *
 * Return: Pointer to the newly created array.
 *         If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
