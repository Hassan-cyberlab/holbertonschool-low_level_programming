#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: first value
 * @max: last value
 *
 * Description: returns NULL if min is greater than max, or if malloc fails
 * Return: pointer to the new array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
