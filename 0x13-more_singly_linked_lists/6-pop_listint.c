#include "lists.h"
/**
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if(head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	tmp = (*head)->next;
	free (*head);
	*head = tmp;

	return (n);
}
