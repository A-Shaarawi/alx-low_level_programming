#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * list_len - function
 * @h: parameter
 * Return: number
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
