#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning
 * @head: begining of node
 * @n: value to insert
 *
 * Return: tmp
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	else
	{
		tmp->n = n;
		tmp->next = *head;
		tmp->prev = NULL;
		*head = tmp;
	}
	return (tmp);
}
