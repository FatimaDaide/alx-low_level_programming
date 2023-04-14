#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the mem
 * @old_size: size of the alloc mem
 * @new_size: new size of the new mem
 *
 * Return: NULL if new size = 0 and ptr is not.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);

	new_p = malloc(new_size);

	if (new_p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)new_p + i) = *((char *)ptr + i);

	free(ptr);

	return (new_p);
}
