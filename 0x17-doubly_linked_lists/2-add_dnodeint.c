#include "lists.h"

/**
 * add_dnodeint - new node at the beginnig of a list
 * @head: pointer
 * @n: pointer
 * Return: void
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd;

	nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->prev = NULL;
	nd->next = *head;
	if (*head != NULL)
	        (*head)->prev = nd;
	*head = nd;

	return (nd);
}
