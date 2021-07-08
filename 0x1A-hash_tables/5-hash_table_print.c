#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hashtable
 * @ht: always void
 */
void hash_table_print(const hash_table_t *ht)
{

	unsigned long i;
	hash_node_t *tmp;
	int flag;

	flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(" ,");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
