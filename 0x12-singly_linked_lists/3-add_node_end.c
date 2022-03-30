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
	char *d;
	int i;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	d = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;


	n->str = d;
	n->len = i;
	n->next = NULL;

	if (*head == NULL)

		*head = n;
	else
	{
		l = *head;

		while (l->next != NULL)

			l = l->next;

		l->next = n;
	}

	return (*head);
}
