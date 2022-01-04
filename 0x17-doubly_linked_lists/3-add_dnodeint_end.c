#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list.
 * @head: beginning of list
 * @n: node added to list.
 *
 * Return: pointer
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tail;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (*head);
	}
	else
	{
		tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = tmp;
		tmp->prev = tail;
	}
	return (tmp);
}
