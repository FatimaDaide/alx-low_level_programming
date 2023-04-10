#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: number of arguments
  * @argv: arguments vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc == 3)
	{
		int result = num1 * num2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
