#include "lists.h"
#include <stdio.h>

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */

void free_listp(listp_t **head)
{
	listp_t *hold;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((hold = current) != NULL)
		{
			current = current->next;
			free(hold);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *headptr, *new, *add;

	headptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = headptr;
		headptr = new;
		add = headptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&headptr);

	return (nnodes);
}
