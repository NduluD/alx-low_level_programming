#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: Points to the linked list of type listint_t
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
	number++;
	h = h->next;
	}

	return (number);
}
