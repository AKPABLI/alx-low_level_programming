#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - func that frees a listint_t list
 * @head: double head pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *step;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		step = (*head)->next;
		free(*head);
		*head = step;
	}
}
