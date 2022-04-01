#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer
 * @n: pointer
 * Return: void
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *l;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
		*head = i;
	else
	{
		l = *head;
		while (l->next != NULL)

			l = l->next;
		l->next = i;
	}
	return (*head);
}
