#include "main.h"

/**
 *_memset - insert n times the content of b into s.
 *@s: the string to insert in it.
 *@b: the string to insert.
 *@n: number of time to insert.
 *Return: string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		s[num] = b;
	}

	return (s);
}
