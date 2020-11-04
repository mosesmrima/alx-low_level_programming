#include "lists.h"
/**
 *free_listint2 - free a list and set head to NULL
 *@head: start of list
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
