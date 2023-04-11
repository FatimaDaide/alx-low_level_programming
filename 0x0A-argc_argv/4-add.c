#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: number of arguments
  * @argv: arguments vector
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, k, n;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		n = atoi(argv[k]);
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
