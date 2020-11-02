#include "lists.h"
#include <stdlib.h>

/**
 *free_list - free memory for linked list
 *@head: head of the list
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
