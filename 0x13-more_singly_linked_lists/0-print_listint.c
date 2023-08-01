#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *current = h;

	/* Set an appropriate buffer size */
	const int BUFFER_SIZE = 1024;
	int buffer[BUFFER_SIZE];
	int buffer_index = 0;

	while (current)
	{
		buffer[buffer_index++] = current->n;
		current = current->next;

		if (buffer_index == BUFFER_SIZE || current == NULL)
		{
			/* Print all buffered values at once */
			for (int i = 0; i < buffer_index; i++)
				printf("%d\n", buffer[i]);

			buffer_index = 0;
		}

		num++;
	}

	return (num);
}
