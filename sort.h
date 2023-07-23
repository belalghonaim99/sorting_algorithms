#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
/**
 * struct listint - double linked list
 * @n: int inserted in node
 * @prev: pointer to previous element of list
 * @next: pointer to last element of list
 *
 */

typedef struct listint_d
{
	const int n;
	struct listint_d *prev;
	struct listint_d *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif
