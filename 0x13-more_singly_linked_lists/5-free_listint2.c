#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *new;

	if (head != NULL)
	{
		/* address of new node*/
		new = *head;
		while ((new = current) != NULL)
		{
			new = new->next;
			free(current);
		}
		*head = NULL;
	}
}
