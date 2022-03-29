#include "lists.h"

/**
 * print_list - prints all the elements oo a list_t
 * @h: pointer
 * Return: number of nodos
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}
	return (c);
}
