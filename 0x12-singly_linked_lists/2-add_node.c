#include "lists.h"

/**
 * add_node - new node at the beginning
 * @head: pointer
 * @str: string
 * Return: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)

		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;

	return (n);
}
