#include "main.h"
/**
  * _memset - Write a function that fills memory with a constant byte
  * @n: byte of the memory
  * @b: the constant byte
  * @s: address of the memory
  *
  * Return: array modified with a constant byte
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
