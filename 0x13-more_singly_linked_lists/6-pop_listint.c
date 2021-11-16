#include "lists.h"
/**
 * pop_listint - delete a list
 * @head: head of a list
 *
 * Return: the head nodes data n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if ((head == NULL) || (*head == NULL))
	{
		return (0);
	}

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
