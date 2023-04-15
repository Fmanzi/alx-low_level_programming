#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value of the range
 * @max: the maximum value of the range
 * Return: pointer to the array, or NULL if creation fails
 */

int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
