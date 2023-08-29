#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list
 * @h: pointer to address
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int safe;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		safe = *h - (*h)->next;
		if (safe > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
