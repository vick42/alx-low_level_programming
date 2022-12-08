#include "lists.h"

/**
 * print_dlistint - prints elements in doubly-linked-list
 * @h: head of doubly-linked-list
 * Return: the number of nodes, type: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		printf("%d\n", h->n);
		size += 1;
		h = h->next;
	}
	return (size);
}
