#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: pointer to start of list
 * @index: index of node to locate
 *Return: the node if found, else null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth_node = 0;
	listint_t *temp;

	temp = head;

	while (index != nth_node)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;

		nth_node++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
