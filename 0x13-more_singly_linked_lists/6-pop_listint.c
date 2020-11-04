#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: start of list
 * Return: n on free else 0 if empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val_n;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (val);
}
