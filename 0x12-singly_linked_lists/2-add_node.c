#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - fucntion
 * @head: para
 * @str: para
 * Return - head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	unsigned int l = 0;

	while (str[l])
		l++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = l;
	node->next = *head;
	*head = node;

	return (*head);
}
