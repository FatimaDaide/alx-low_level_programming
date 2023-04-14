#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *string_nconcat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: number of bytes
  *
  * Return: Pointer to the string concatenated
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	s = malloc(len1 + n + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		*s = *s1;
		s++;
		s1++;
	}

	while (n > 0 && *s2 != '\0')
	{
		*s = *s2;
		s++;
		s2++;
		n--;
	}
	*s = '\0';

	return (s);
}
