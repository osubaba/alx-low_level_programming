#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *noma = h;
	size_t count = 0;

	while (noma != NULL)
	{
		printf("%d\n", noma->n);
		count += 1;
		noma =noma->next;
	}
	return (count);
}
