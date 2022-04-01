#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t, *c;

	c = head;

	while (c != NULL)
	{
		t = c->next;
		free(c);
		c = t;
	}
}
