#include "function_pointers.h"

/**
 * array_iterator - runs a function on each element of an array
 * @array: a pointer variable to the array of integers
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;


if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
