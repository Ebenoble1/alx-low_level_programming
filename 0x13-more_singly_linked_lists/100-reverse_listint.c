#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  *
  * @head: head of the list
  * Return:first new  node of list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (!head || !(*head))
		return (NULL);

	prev = NULL;
	next = *head;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
