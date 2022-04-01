#include "lists.h"

/**
 * pop_listint - eletes the head node of a linked list
 * @head: pointer
 * Return: void
 */
int pop_listint(listint_t **head)
{

	listint_t *t;
	int d;

	if (*head == NULL)
		return (0);

	t = *head;
	d = (*head)->n;
	*head = (*head)->next;

	free(t);

	return (d);
}
