#include "main.h"

/**
 *_strchr - find the first occurence of a char.
 *@c: the char to be found.
 *@s: the string to search in.
 *Return: a pointer to the first occurence of char c in s or NULL.
 */
char *_strchr(char *s, char c)
{
	int num = 0;

	while (s[num] != '\0')
	{
		if (s[num] == c)
			break;
		num++;
	}
	if (s[num] == c)
		return (s + num);
	return (0);
}
