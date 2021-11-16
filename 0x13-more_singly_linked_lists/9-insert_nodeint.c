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

	new = malloc(sizeof(listint_t));
	if(!new)
		return (NULL);

	if ((head == NULL) || (*head == NULL))
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		return (new);
	}

	for (i = 0; i < idx; i++)
	{
		*head = (*head)->next;
	}
	new->next = (*head)->next;
	(*head)->next = new;

	return (new);
}
