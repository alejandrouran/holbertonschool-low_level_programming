#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: pointer
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (n < index)
	{
		head = head->next;
		n++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
