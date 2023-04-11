#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
		sum += num;
		}
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
