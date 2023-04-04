#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *new;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = new) != NULL)
		{
			curr = curr->next;
			free(new);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	listp_t *hptr, *nem_memory, *add;

	hptr = NULL;
	while (head != NULL)
	{
	new_memory = malloc(sizeof(listp_t));

		if (new_memory == NULL)
			exit(98);

		new_memory->p = (void *)head;
		new_memeory->next = hptr;
		hptr = new_memory;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (n_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}

	free_listp(&hptr);
	return (n_nodes);
}
