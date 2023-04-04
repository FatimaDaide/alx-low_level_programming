#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: input
  * @accept: input
  * Return: Always 0
  */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
		if (*s == accept[c])
		return (s);
		}
	s++;
	}
return ('\0');
}
