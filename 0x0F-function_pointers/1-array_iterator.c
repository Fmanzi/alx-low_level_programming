#include "function_pointers.h"

/**
 *array_iterator - function executing a function
 *@array: provided int array
 *@size: array size
 *@action: Pointer to fn to exeute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
