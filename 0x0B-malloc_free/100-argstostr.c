#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concatenates all the arguments of the program.
  * @ac: integer
  * @av: char
  * Return: 0
  */
char *argstostr(int ac, char **av)
{
	int i, j, ln = 0, arg = 0;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, ln++)
	{
		ln += strlen(av[i]);
	}

	m = malloc(sizeof(char) * ln + 1);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0' ; j++)
		{
			m[arg] = av[i][j];
			arg++;
		}
		m[arg] = '\n';
		arg++;
	}
	m[arg] = '\0';

	return (m);
}
