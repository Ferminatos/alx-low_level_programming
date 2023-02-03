#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_delete - delete the sorted hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (node->next == NULL)
			{
				free(node->value);
				free(node->key);
				free(node);
				continue;
			}

			while (node != NULL)
			{
				tmp = node;
				node = node->next;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
