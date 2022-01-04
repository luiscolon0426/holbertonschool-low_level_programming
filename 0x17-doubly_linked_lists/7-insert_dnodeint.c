#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node
 * @h: head of list
 * @idx: index of list
 * @n: node to insert
 *
 * Return: node to insert
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	tmp = *h;

	for (count = 1; tmp != NULL && count != idx; count++)
	{
		tmp = tmp->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
