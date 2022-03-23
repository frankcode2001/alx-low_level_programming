#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: string to modify.
 *
 *Return: s modified.
 */
char *string_toupper(char *s)
{
	int num = 0;

	while (s[num] != '\0')
	{
		if (s[num] > 96 && s[num] < 123)
		{
			s[num] -= 32;
		}
		num++;
	}

	return (s);
}
