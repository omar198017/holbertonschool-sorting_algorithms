#include "sort.h"
#include <stdlib.h>
#include <stdio.h>


void swap(int *array, size_t size, int idx, int wall);
void partition(int *array, size_t size, int lo, int hi);

/**
 * quick_sort - sort an array using the quick sort algorithm.
 * @array: pointer to an array
 * Author: Omar Caguazango
 * @size: size of @array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size == 0)
		return;
	partition(array, size, 0, size - 1);

}

/**
 * swap - swaps 2 elements of a given array.
 *
 * @array: point to an array
 * @size: size of the array.
 * @idx: index of postion withing the array
 * @wall: index of postion withing the array
 */
void swap(int *array, size_t size, int idx, int wall)
{
	int tmp = array[wall];

	if (idx != wall)
	{
		array[wall] = array[idx];
		array[idx] = tmp;
		print_array(array, size);
	}
}

/**
 * partition - sort a partition of an array and if need will recursevly
 * partition the array again.
 *
 * @array: arary to be partitioned and sorted
 * @size: size of the array
 * @lo: begin of a partition. (left side)
 * @hi: end of a partition. (right side)
 */
void partition(int *array, size_t size, int lo, int hi)
{
	int i, pivot, wall;

	if ((hi) - lo <= 0)
		return;
	if (hi == 1 && array[0] < array[hi])
		return;

	i = wall = lo;
	pivot = hi;
	while (i < pivot)
	{
		if (array[i] < array[pivot])
		{
			swap(array, size, i, wall);
			wall++;
		}
		i++;
	}
	swap(array, size, pivot, wall);

	if (hi - lo > 0)
		partition(array, size, wall + 1, hi);
	if (hi - lo > 0)
		partition(array, size, lo, wall - 1);
}
