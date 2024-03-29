#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;

	head_node = new->n;

	h = new->next;

	free(new);

	*head = h;

	return (head_node);
}
