#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_ptr;
	dlistint_t *h_ptr2;
	unsigned int i;

	h_ptr = *head;

	if (h_ptr != NULL)
		while (h_ptr->prev != NULL)
			h_ptr = h_ptr->prev;

	i = 0;

	while (h_ptr != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h_ptr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h_ptr2->next = h_ptr->next;

				if (h_ptr->next != NULL)
					h_ptr->next->prev = h_ptr2;
			}

			free(h_ptr);
			return (1);
		}
		h_ptr2 = h_ptr;
		h_ptr = h_ptr->next;
		i++;
	}

	return (-1);
}
