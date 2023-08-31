#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
size_t count = 0;
int loop_detected = 0;
listint_t *slow = *h;
listint_t *fast = *h;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
loop_detected = 1;
break;
}
}

if (loop_detected)
{
fprintf(stderr, "Loop detected, exiting with status 98\n");
exit(98);
}

while (current != NULL)
{
listint_t *temp = current;
current = current->next;
temp->next = NULL;
free(temp);
count++;
}

*h = NULL;

return count;
}
