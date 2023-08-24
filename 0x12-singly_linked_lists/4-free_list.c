#include <stdlib.h>
#include "lists.h"

/**
 * free_list - func
 * @head: para
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
