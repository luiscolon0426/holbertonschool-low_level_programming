#include "lists.h"
/**
 *sum_dlistint - sum all of the data of a list.
 * @head: beginning of a list
 *
 * Return: sum of list
 **/
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
