#include "lists.h"

/**
 * free_list - free a list_t
 * @head: start of list
 * Return: void
 *
 */
void free_list(list_t *head)
{
	list_t *t, *c;

	c = head;

	while (c != NULL)
	{
		t = c->next;
		free(c->str);
		free(c);
		c = t;
	}
}
