#include "lists.h"
/**
 * add_node_end - adds new node at the end of list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t i = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[i])
		i++;

	new->len = i;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;

	else
	{
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
	}
return (*head);
}
