#include "lists.h"
/**
 * delete_dnodeint_at_index - function that
 * deletes the node at index index of a dlistint_t linked list.
 * @index: index of the new node
 * @head: head of the list
 * Return: 1 if success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned in x;
dlistint_t *h1;
dlistint_t *h2
h1 = *head;
if (h1 != NULL)
while (h1->prev != NULL)
h1 = h1->prev;
x = 0
while (h1 != NULL)
{
if (x == index)
{
if (x == 0)
{
*head = h1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
h2->next = h1->next;
if (h1->next != NULL)
h1->next->prev = h2
}
free(h1);
return (1);
}
h2 = h1;
h1 = h1->next;
x++;
}
return (-1);
}
