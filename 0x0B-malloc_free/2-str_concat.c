#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *str_concat -  concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: result
  */
char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	m = malloc(sizeof(char) * (size1 + size2 + 1));

	if (m == NULL)
		return (NULL);

	while (*s1 != '\0')
		*m++ = *s1++;

	while (*s2 != '\0')
		*m++ = *s2++;

	*m = '\0';
	return (m);
}
