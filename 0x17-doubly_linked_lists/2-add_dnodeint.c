#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h_ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h_ptr = *head;

	if (h_ptr != NULL)
	{
		while (h_ptr->prev != NULL)
			h_ptr = h_ptr->prev;
	}

	new->next = h_ptr;

	if (h_ptr != NULL)
		h_ptr->prev = new;

	*head = new;

	return (new);
}
