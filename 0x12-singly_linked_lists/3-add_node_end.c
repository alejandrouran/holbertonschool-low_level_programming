#include "lists.h"

/**
 * add_node_end - new node at the end
 * @head: pointer
 * @str: string
 * Return: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *l;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	l = *head;

	n->str = strdup(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = n;
	return (n);
}
