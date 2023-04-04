#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: input string
 * @needle: input substring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *t = needle;

		while (*f == *t && *t != '\0')
		{
			f++;
			t++;
		}

		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
