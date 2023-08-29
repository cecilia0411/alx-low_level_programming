#include "lists.h"

/**
 * find_listint_loop_pl - print lists with a loop
 * @head: pointer to head adress
 * Return: address of node where loop starts/returns, NULL if no loop
 */

listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *beg, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (beg = head; beg != end; beg = beg->next)
			if (beg == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head address
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop;
	listint_t *safe;

	safe = find_listint_loop_pl((listint_t *) head);

	for (len = 0, loop = 1; (head != safe || loop) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == safe)
			loop = 0;
		head = head->next;
	}

	if (safe != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
