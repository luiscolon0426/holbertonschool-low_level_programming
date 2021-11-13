#include "lists.h"

/**
 * add_node - add node list
 * @head: list
 * @str: string added to list
 * Return: pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	it idx = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	if (str == NULL)
	{
		tmp->str = NULL;
		tmp->len = 0;
	}
	else
	{
		tmp->str = strdup(str);
		while (str[idx])
		{
			idx++;
		}
		tmp->len = idx;
	}
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
