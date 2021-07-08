#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val;
	unsigned long i;
	hash_node_t *node;
	unsigned long int index;
	hash_table_t *tmp;
	tmp = ht;

	val = strdup(value);
	if(val == NULL)
		return (0);
	if (ht == NULL || key == NULL || *key =='\0' || value == NULL)
		return (0);
	/* Get index from key */
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(key, tmp->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
		while (tmp->array[i] != NULL)
		{
			if (strcmp(key, tmp->array[i]->key) == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = val;
				return (1);
			}
			tmp->array[i] = tmp->array[i]->next;
		}

	}

	
	/* add new node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = val;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}