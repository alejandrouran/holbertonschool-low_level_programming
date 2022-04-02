#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * @head: pointer list
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
