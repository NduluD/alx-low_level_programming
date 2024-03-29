#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointes to the first element in the linked list
 *
 * Return: what is inside the elements that was deleted
 * or if the linked list is empty return 0
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
