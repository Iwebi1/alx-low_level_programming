#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked list
 * @head: this points to the first element of the linked list
 *
 * Return: the datas in the elements that was deleted,
 * or NULL (0) if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

