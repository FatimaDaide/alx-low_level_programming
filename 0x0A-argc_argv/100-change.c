#include <stdio.h>
#include <stdlib.h>

/**
  * main -  prints the minimum number of coins
  * @argc: number of arguments
  * @argv: arguments vector
  *
  * Return: 0-succes
  */
int main(int argc, char *argv[])
{
	int n, i, sum = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			n -= coins[i];
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
