#include "lists.h"

/**
 * add_nodeint - new node at the beginning of a list
 * @head: pointer
 * @n: pointer
 * Return: void
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
