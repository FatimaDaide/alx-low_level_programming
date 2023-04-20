#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * @array: array
  * @size: size array
  * @action: function pointer
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsignd int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}