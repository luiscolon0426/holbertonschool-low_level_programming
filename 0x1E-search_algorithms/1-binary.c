#include "search_algos.h"

/**
 * binary_search - method
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * @int: parameter
 * Return: value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t index1, index2;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index2 = left; index2 <= right; index2++)
		{
			if (index2 == right)
				printf("%d", array[index2]);
			else
				printf("%d, ", array[index2]);
		}
		printf("\n");
		index1 = (left + right) / 2;
		if (array[index1] < value)
			left = index1 + 1;
		else if (array[index1] > value)
			right = index1 - 1;
		else
			return (value);
	}
	return (-1);
}
