#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer
 * return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
