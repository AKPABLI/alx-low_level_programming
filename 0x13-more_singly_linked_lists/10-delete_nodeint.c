#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - func that deletes the node at index
 * @head: double head pointer
 * @index: index node
 *
 * Return: index node pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (n = 0; n < index - 1; n++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
