#include "main.h"
/**
  * _memcpy - function that copies memory area
  * @n: number of bytes
  * @src: memory area
  * @dest: memory area
  *
  * Return: memory area copied
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int i = n;

	for (; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
