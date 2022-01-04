#include "lists.h"
/**
 * free_dlistint - free a dlist
 * @head: beginning of list
 *
 * Return: None
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
