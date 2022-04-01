#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h: pointer
 * Return: void
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
