#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located,
 * or -1 if not found or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int prev = 0;
	int i;

	if (array == NULL)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[0]);
	while (1)
	{
		if (array[step] >= value || step >= (int)size)
			break;
		prev = step;
		step += (int)sqrt(size);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; i < (int)size && i <= step; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
