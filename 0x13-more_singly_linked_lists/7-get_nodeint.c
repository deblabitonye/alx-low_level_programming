#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to first element of a list
 * @index: node desired position to retrieve
 * Return: pointer to node retrieved
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int p;
for (p = 0; p < index; p++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
