#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:the head address pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned long int i = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
