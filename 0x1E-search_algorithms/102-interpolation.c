#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of
 *                        integers using the Interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return:  The first index where value is located otherwise -1
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	if (!array)
		return (-1);
	high = size - 1;
	low = 0;
	while (size)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}
	}
	return (-1);
}
