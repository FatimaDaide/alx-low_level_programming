#include "main.h"
#include <stdio>
/**
  * print_diagsums - prints sum of two diagonals of a square matrix
  * @a: input
  * @size: input
  * Return: Always 0
  */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
