#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at a given position
 * @h: main node
 * @idx: list index
 * @n: list data
 * Return: void
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *next, *nd;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
		return (NULL);
	nd->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = nd;
		nd->prev = NULL;
	}
	else
	{
		nd->prev = temp;
		next = temp->next;
		temp->next = nd;
	}
	nd->next = next;
	if (nd->next != NULL)
		nd->next->prev = nd;
	return (nd);
}
