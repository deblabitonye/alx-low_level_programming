#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 *@head: pointer to the beginning of the list
 *@index: index of the node to be freed
 *Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a;
listint_t *node;
listint_t *tmp;
tmp = *head
if (head == NULL || *head == NULL)
return (-1);
for (a = 0; a < index - 1 && tmp != NULL && index != 0; a++)
tmp = head->next;
if (tmp == NULL)
return (-1);
if (index == 0)
{
node = tmp->next;
free(tmp);
*head = node;
}
else
{
if (tmp->next == NULL)
node = tmp->next;
else
node = tmp->next->next;
free(tmp->next);
tmp->next = node;
}
return (1);
}
