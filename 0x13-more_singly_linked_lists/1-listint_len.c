#include <stddef.h> /* For NULL */
#include "lists.h"

/**
 * listint_len - A func that returns the number of elements in a list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
