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
	dlistint_t *temp, *nd;

	while (*h)
	{
		nd = malloc(sizeof(dlistint_t));
		temp = *h;
		nd->n = n;

		if (idx == 0)
		{
			nd->next = NULL;
			return (nd);
		}
		while (temp->next != NULL && idx - 1 > 0)
		{
			temp = temp->next;
			idx--;
		}
		if (temp->next == NULL)
		{
			free(nd);
			return (NULL);
		}
		nd->next = temp->next;
		temp->next = nd;
		return (nd);
	}
	return (NULL);
}
