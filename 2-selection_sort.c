#include "sort.h"
/**
 * selection_sort - func sorting a array of integers
 * @size: size of the array
 * @array: array_list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, sort;
	int temp, swap, f = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		temp = i;
		f = 0;
		for (sort = i + 1; sort < size; sort++)
		{
			if (array[temp] > array[sort])
			{
				temp = sort;
				f += 1;
			}
		}
		swap = array[i];
		array[i] = array[temp];
		array[temp] = swap;
		if (f != 0)
			print_array(array, size);
	}
}
