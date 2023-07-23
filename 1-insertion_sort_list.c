#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: Dobuly linked list to sort it
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
/**
 *swap_node - swap a node for his prev
 *@node: node
 *@list: node of list
 *Return: return a pointer to a node
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *b = node->prev, *c = node;


	b->next = c->next;
	if (c->next)
		c->next->prev = b;
	c->next = b;
	c->prev = b->prev;
	b->prev = c;
	if (c->prev)
		c->prev->next = c;
	else
		*list = c;
	return (c);
}
