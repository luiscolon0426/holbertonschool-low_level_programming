#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index of list
 *
 * Return: 1 if success, -1 if fails
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new = *head, *tmp;
	unsigned int count;

	if (!head || !*head)
	{
		return (-1);
	}
	tmp = *head;

	for (count = 1; tmp != NULL && count != index; count++)
	{
		tmp = tmp->next;
	}
	if (index > count)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	else
	{
		new = tmp->next;
		tmp->next = new->next;
		free(new);
		return (1);
	}
	return (-1);
}
