#include "main.h"
/**
  * is_prime_number - if the input integer is a prime number
  * @n: input number
  *
  * Return: 1 if n is a prime number, otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i * i <= n, i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
