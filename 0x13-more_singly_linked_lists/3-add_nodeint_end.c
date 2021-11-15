#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of
 * a list
 * @head: first node
 * @n: integer added
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;

		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;

		return (new);
	}
}
