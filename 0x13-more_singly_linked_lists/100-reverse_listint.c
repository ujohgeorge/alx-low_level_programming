#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	listint_t *temp = NULL;

	while (current)
	{
		/* Store the next node to be processed */
		temp = current->next;

		/* Reverse the link for the current node */
		current->next = previous;

		/* Move previous and current to the next nodes */
		previous = current;
		current = temp;
	}

	*head = previous;

	return (*head);
}
