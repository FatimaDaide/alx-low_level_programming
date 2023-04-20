#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: name of string
  * @f: function
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		f(name);
}
