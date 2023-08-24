#include <stdio.h>
#include "lists.h"
/**
 * print_list - function
 * @h: parameter
 * Return: number
 */

size_t print_list(const list_t *h)
{
	size_t i;
for (i = 0; h; i++)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
}
	return (i);
}
