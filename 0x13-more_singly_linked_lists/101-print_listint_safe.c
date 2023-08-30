#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t count = 0;
int loop_detected = 0;
const listint_t *slow = head;
const listint_t *fast = head;

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
printf("[%p] %d\n", (void *)current, current->n);
count++;
current = current->next;
}

return (count);
}
