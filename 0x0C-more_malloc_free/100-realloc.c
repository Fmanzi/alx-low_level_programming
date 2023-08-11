#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a block of mem using malloc
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block.
 *         If new_size is zero and ptr is not NULL, frees ptr and returns NULL.
 *         If ptr is NULL, equivalent to malloc(new_size).
 *         If malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size > old_size)
memcpy(new_ptr, ptr, old_size);
else
memcpy(new_ptr, ptr, new_size);

free(ptr);

return (new_ptr);
}
