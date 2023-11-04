#include "hash_tables.h"

/**
 * key_index - Get the index of a given key in the hash table
 * @key: The key to look for
 * @size: The size of the hash table's array
 *
 * Return: The index where the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;

    if (key == NULL || size == 0)
        return (0);

    hash = hash_djb2(key);
    return (hash % size);
}
