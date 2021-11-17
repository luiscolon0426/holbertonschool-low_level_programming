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
	listint_t *new_node, *temp;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	temp = *head;
	for (count = 1; temp != NULL && count != idx; count++)
	{
		temp = temp->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
