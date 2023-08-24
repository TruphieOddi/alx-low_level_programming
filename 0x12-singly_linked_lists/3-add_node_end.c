#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: double pointer to the said list_t list
 * @str: said string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	list_t *node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = len;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (node->next)
		node = node->next;
	node->next = list;

	return (list);
}
