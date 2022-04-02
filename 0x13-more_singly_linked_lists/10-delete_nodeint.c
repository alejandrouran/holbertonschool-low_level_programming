#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: main node
 * @index: node index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = *head;
	listint_t *tm;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (t)
	{
		if (index == i + 1)
		{
			tm = t->next;
			t->next = tm->next;
			free(tm);
			return (1);
		}
		t = t->next;
		i++;
	}
	return (-1);
}
