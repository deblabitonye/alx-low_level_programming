#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp
temp = *head;
if (temp == NULL)
return (0);
*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
