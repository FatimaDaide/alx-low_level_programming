#include "main.h"
#include <stdlib.h>

/**
  * *_strdup -  returns a pointer to a newly allocated space in memory
  * @str: string
  *
  * Return: 0
  */
char *_strdup(char *str)
{
	int i, k = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
	s[k] = str[k];

	return (s);
}
