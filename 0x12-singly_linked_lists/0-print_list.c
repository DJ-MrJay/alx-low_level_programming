#include <stdio.h>
#include "lists.h"

/**
 * print_list - Displays all elements in a linked list
 * @h: Pointer to the list_t list for printing
 *
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
    size_t num_nodes = 0;

    while (h)
    {
        if (!h->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        num_nodes++;
    }

    return (num_nodes);
}
