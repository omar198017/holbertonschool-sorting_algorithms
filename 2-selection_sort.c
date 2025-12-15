#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sort an array using a selection sort algorithm
 * Author: Omar Caguazango
 * @array: pointer to an array
 * @size: sie of the array
 */
void selection_sort(int *array, size_t size)
{
	int idx, tmp, lo;
	size_t i, pos;

	idx = tmp = lo = 0;

	if (!array || size == 0)
		return;

	while (idx < (int) size - 1)
	{
		tmp = lo = array[idx];
		for (i = idx; i < size; i++)
		{
			if (array[i] < lo)
			{
				lo = array[i];
				pos = i;
			}

		}

		if (lo < array[idx])
		{
			array[idx] = lo;
			array[pos] = tmp;
			print_array(array, size);
		}

		idx++;
	}
}
