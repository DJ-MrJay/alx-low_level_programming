#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list
 * @h: Linked list of type listint_t to traverse
 *
 * Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
