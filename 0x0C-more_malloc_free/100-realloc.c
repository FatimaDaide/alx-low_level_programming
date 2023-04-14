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
	char 
	unsigned int i;

	if (new_size == old_size)
		return (ptr

