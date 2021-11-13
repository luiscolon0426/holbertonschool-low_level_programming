#include "lists.h"

/**
 * add_node_end - ads node to list
 * @str: string added to list
 * @head: index of list
 * Return:pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *end;
	int i = 0;

	end = *head;
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
		while (str[i])
		{
			i++;
		}
		tmp->len = i;
	}
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = tmp;
	}
	return (*head);
}

