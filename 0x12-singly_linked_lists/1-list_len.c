#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to the said list_t list
 *
 *  Return: number of elements in h/linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
