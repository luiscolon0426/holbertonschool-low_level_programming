#include "lists.h"
/**
 *
 *
 * */
size_t dlistint_len(const dlistint_t *h)
{
	int a;

	if (h == 0)
	{
		return (0);
	}
	a = 0;
	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
