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
unsigned long int index;
hash_node_t *hash_node, *temp;
char *new_value;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0 || value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL)
{

if (strcmp(temp->key, key) == 0)
{

new_value = strdup(value);
if (new_value == NULL)
return (0);
free(temp->value);
temp->value = new_value;
return (1);

}
temp = temp->next;

}
hash_node_t = make_hash_node_t(key, value);
if (hash_node == NULL)
return (0);
hash_node->next = ht->array[index];
ht->array[index] = hash_node;
return (1);
}
