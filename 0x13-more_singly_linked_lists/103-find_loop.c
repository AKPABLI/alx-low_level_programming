#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s1;
	listint_t *prev;

	s1 = head;
	prev = head;
	while (head && s1 && s1->next)
	{
		head = head->next;
		s1 = s1->next->next;

		if (head == s1)
		{
			head = prev;
			prev =  s1;
			while (1)
			{
				s1 = prev;
				while (s1->next != head && p2->next != prev)
				{
					s1 = s1->next;
				}
				if (s1->next == head)
					break;

				head = head->next;
			}
			return (s1->next);
		}
	}

	return (NULL);
}
