#include "main.h"

int actual_sqrt_recursion(int n, int i);

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
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}

/**
  * actual_sqrt_recursion - find the natural root
  * @n: calculated square root number
  * @i: iterator
  *
  * Return: result of square root
  */
int actual_sqrt_recursion(int n, int i)
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
		return (actual_sqrt_recursion(n, i + 1));
	}
}
