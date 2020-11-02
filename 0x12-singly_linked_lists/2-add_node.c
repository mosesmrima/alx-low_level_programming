#include "lists.h"
#include <string.h>

/**
 *add_node - function to add node at front
 *@head: pointer to first node
 *@str: string to initialize the str member of the struct
 *Return: NULL on fail, else address of new node
 */


list_t *add_node(list_t **head, const char *str)
{
	char *str_buff;

	str_buff = strdup(str);

	if (str_buff == NULL)
	{
		return (NULL);
	}

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str_buff);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
