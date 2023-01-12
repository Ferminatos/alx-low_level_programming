#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	i = 0;

	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		i++;
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	else
	{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			tmp->next->prev = new;
			tmp->next = new;
			new->prev = tmp;
	}

	return (new);
}
