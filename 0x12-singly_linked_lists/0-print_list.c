#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function
 * @h: parameter
 * Return: number
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
for (; h; i++)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
}
	return (i);
}
