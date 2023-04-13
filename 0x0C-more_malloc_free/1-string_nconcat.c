#include "main.h"
#include <stdlib>

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
	unsigned int i = 0, s1 = 0, s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	char *s = malloc(len1 + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		s[len1 + 1] = s2[i];
	}
	s[len1 + n] = '\0';

	return (s);
}
