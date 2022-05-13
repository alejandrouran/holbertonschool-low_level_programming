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
	dlistint_t *temp = *h, *nd;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->prev = temp;
	nd->next = temp->next;
	temp->next->prev = nd;
	temp->next = nd;

	return (nd);
}
