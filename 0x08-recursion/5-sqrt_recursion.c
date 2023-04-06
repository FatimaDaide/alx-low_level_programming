#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: calculated square root number
  *
  * Return: result of square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}

/**
  * sqrt_helper - find the natural square root
  * @n: calculated square root number
  * @i: iterator
  *
  * Return: result of square root
  */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
