#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list, at a given position
 * @head: first node pointer in the list
 * @idx: index where the new node is to be added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *hold = *head;
	unsigned int j = 0;

	if (!idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);

		(*new_node).n = n;
		(*new_node).next = *head;

		*head = new_node;

		return (*head);
	}
	while (hold)
	{
		if (j == (idx - 1))
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			(*new_node).n = n;
			(*new_node).next = (*hold).next;
			(*hold).next = new_node;
			return (new_node);
		}
		hold = (*hold).next;
		j++;
	}
return (NULL);
}
