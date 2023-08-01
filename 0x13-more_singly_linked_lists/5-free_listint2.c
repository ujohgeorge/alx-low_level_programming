#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: double pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *current = *head;
	listint_t *temp;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
