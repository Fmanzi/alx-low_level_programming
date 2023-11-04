#include "hash_tables.h"
#include <stdio.h>

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new_table = NULL;
unsigned long int i;

new_table = malloc(sizeof(shash_table_t));
if (new_table == NULL)
return (NULL);

new_table->size = size;
new_table->array = malloc(sizeof(shash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

for (i = 0; i < size; i++)
new_table->array[i] = NULL;

new_table->shead = NULL;
new_table->stail = NULL;

return (new_table);
}

/**
 * shash_table_set - Add an element to the sorted hash table
 * @ht: The sorted hash table to add or update the key/value to
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *current_node, *prev_node;
unsigned long int index;

if (ht == NULL || key == NULL || value == NULL || *key == '\0')
return (0);

index = key_index((const unsigned char *)key, ht->size);

current_node = ht->array[index];
prev_node = NULL;

while (current_node != NULL)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = strdup(value);
if (current_node->value == NULL)
return (0);
return (1);
}
prev_node = current_node;
current_node = current_node->next;
}

new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

if (prev_node == NULL)
{
new_node->snext = ht->shead;
ht->shead = new_node;
}
else
{
new_node->snext = prev_node->snext;
prev_node->snext = new_node;
}

if (new_node->snext == NULL)
ht->stail = new_node;

return (1);
}

/**
 * shash_table_get - Retrieve a value associated with a key from the sorted hash table
 * @ht: The sorted hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the key, or NULL if the key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *current_node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

current_node = ht->shead;
while (current_node != NULL)
{
if (strcmp(current_node->key, key) == 0)
return (current_node->value);
current_node = current_node->snext;
}

return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current_node;

if (ht == NULL)
return;

printf("{");
current_node = ht->shead;
while (current_node != NULL)
{
printf("'%s': '%s'", current_node->key, current_node->value);
if (current_node->snext != NULL)
printf(", ");
current_node = current_node->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current_node;

if (ht == NULL)
return;

printf("{");
current_node = ht->stail;
while (current_node != NULL)
{
printf("'%s': '%s'", current_node->key, current_node->value);
if (current_node->sprev != NULL)
printf(", ");
current_node = current_node->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current_node, *temp_node;

if (ht == NULL)
return;

current_node = ht->shead;
while (current_node != NULL)
{
temp_node = current_node;
current_node = current_node->snext;
free(temp_node->key);
free(temp_node->value);
free(temp_node);
}

free(ht->array);
free(ht);
}
