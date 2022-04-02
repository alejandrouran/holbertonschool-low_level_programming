#include "lists.h"

/**
 * insert_nodeint_at_index - new node at a given position.
 * @head: main node
 * @idx: list index
 * @n: list data
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *e;
	listint_t *t = *head;

	e = malloc(sizeof(listint_t));

	if (e == NULL)
	{
		return (NULL);
	}

	e->n = n;
	e->next = NULL;
	if (idx == 0)
	{
		e->next = *head;
		*head = e;
	}
	while (t)
	{
		if (index == idx - 1)
		{
			e->next = t->next;
			t->next = e;
			return (e);
		}
		t = t->next;
		index++;
	}
	return (NULL);
}
