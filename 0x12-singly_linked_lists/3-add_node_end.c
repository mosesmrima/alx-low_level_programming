#include "lists.h"
#include <string.h>
#include <stdio.h>
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *temp;
    char *str_buff = strdup(str);
    if (str_buff == NULL)
    {
        return (NULL);
    }
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node -> str = str_buff;
    new_node -> len = strlen(str_buff);
    new_node -> next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }

    else
    {
        temp = *head;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
    return (*head);
}
