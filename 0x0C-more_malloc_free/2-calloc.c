#include <stdlib.h>
#include "main.h"

/**
  * *_memset - fill memory
  * @s: pointer
  * @b: char
  * @n: len of mem to be used
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * sizeof(int));

	if (p == 0)
		return (NULL);

	_memset(p, 0, nmemb * sizeof(int));

	return (p);
}
