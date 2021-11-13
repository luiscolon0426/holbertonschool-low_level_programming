#include "lists.h"
/*
 * free_list - frees the linked list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *tmp;


	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
