#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: integer input
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 0);
		return (-l);
	}
	else
	{
		_putchar(l + 0);
		return (l);
	}
}
