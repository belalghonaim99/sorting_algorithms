#include "sort.h"
/**
 * bubble_sort - sort array elements from minimum to maximum
 * @array: the array
 * @size: array of size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, node, t = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (node = 0; node < size; node++)
		{
			if (array[node] > array[node + 1] && array[node + 1])
			{
			t = array[node];
			array[node] = array[node + 1];
			array[node + 1] = t;
			print_array(array, size);
			}
		}
}
