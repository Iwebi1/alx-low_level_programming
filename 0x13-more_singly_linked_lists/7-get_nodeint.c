#include "lists.h"

/**
 * get_nodeint_at_index - this returns the node at a certain index in the linked list
 * @head: the first node in the linked list
 * @index: the index of the node to be return
 *
 * Return: the pointer to the node looked for, or NULL(0)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}









