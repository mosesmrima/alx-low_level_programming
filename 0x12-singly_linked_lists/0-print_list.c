#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 *print_list - function to print members of a linked list
 *@h: pointer to the 1st membe of the linked list
 *return: sze of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(h -> str), h -> str);
		}
		len++;

		h = h -> next;
	}

	return (len);
}
