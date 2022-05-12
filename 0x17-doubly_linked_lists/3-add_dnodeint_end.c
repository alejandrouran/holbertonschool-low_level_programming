#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: pointer
 * @n: pointer
 * Return: void
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd, *tm;

	nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (*head == NULL)
	{
		nd->prev = NULL;
		*head = nd;
		return (nd);
	}
		tm = *head;
		while (tm->next != NULL)
		tm = tm->next;
		tm->next = nd;
		nd->prev = tm;

	return (*head);
}
