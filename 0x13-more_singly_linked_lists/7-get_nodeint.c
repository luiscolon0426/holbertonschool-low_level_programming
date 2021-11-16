#include "lists.h"
/**
 * get_nodeint_at_index - returns
 * the nth of a liked list
 * @head: pointer of linked list
 * @index: index of node
 *
 * Return: the node, or NULL instead
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;
	for (i = 0; i < index; i++)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}
	return (tmp);
}
