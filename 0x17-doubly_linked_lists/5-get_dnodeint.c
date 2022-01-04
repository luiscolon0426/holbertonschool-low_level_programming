#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth node of a list
 * @head: beginning of node
 * @index: index of node
 *
 * Return: NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	tmp = head;

	for (idx = 0; idx < index; idx++)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}
	return (tmp);
}
