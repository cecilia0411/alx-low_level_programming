#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head adress
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del;

	if (!head || !*head)
		return (0);

	del = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (del);
}
