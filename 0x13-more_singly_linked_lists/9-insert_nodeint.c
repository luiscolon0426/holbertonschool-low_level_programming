#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to list
 * @idx: subsitutes node
 * @n: data value
 *
 * Return: adress of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	tmp = *head;

	for (i = 1; tmp != NULL && i != idx; i++)
	{
		tmp = (tmp)->next;
	}
	if (idx > i)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		return (new);
	}

	if ((head == NULL) || (*head == NULL))
	{
		return (NULL);
	}

	new->next = (tmp)->next;
	tmp->next = new;

	return (new);
}
