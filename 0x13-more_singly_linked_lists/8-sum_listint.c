#include "lists.h"

/**
 * sum_listint - Calculates the sum of all n
 * @head: pointer to head of list
 * Return: sum else zero on empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
