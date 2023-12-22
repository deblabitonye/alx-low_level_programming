#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, i;
hash_node_t *new;
char *value_copy;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return 0;

value_copy = strdup(value);
if (value_copy == NULL)
return (0);
    
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_copy;
return (1);
}
}

new = malloc(sizeof(hash_node_t))
if (new == NULL)


    /* Check if the key already exists in the hash table */
    temp = ht->array[index];
    while (temp != NULL)
    {
        /* If the key already exists, update the value and return 1 */
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return 0;
            return 1;
        }
        temp = temp->next;
    }

    /* If the key doesn't exist, create a new node and add it to the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return 0;
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
