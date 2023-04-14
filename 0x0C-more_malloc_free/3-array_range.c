#include "main.h"
#include <stdlib.h>

/**
  * array range - creates an array of integers
  * @min: min value
  * @max: max value
  * Return: pointer to the newly array
  */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
