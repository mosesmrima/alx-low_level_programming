#incude "lists.h"
/**
 *pop_listint - delets a node
 *@head: start of ll
 *Return: val
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);

	tmp = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (val);
}
