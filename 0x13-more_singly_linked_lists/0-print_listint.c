#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *tmp;

	tmp = h;

	for (count = 0; tmp != NULL; count++)
	{

		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
	return (count);
}
