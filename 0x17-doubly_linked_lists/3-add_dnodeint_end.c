#include "lists.h"
/**
 * add_dnodeint_end - adds a new node
 * at the end of a dlistint_t list.
 * @n: value of the element
 * @head: head of the list
 * Return: Adress of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistsint_t *new;
dlistint_t *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
h = *head;
if (h != NULL)
{
while (h->next != NULL)
h = h->next;
h->next = new
}
else
{
*head = new;
}
new->prev = h;
return (new);
}
