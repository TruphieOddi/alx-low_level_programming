#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: said list to be freed
 *
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
