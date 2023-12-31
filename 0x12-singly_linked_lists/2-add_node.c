#include "lists.h"
/**
 * add_node - adds a new node at the beginning of list_t list.
 * @head: head of the linked list.
 * @str: string input to be stored.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
return (*head);
}
