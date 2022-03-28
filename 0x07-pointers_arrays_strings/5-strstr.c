#include "main.h"

/**
 *_strstr - find a string in a string.
 *@haystack: first string.
 *@needle: second string.
 *Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length_needle = 0, num = 0, num1, tmpi, checker;

	while (needle[length_needle] != '\0')
		length_needle++;

	while (haystack[num] != '\0')
	{
		tmpi = num;
		checker = 0;
		for (num1 = 0; num1 < length_needle; num1++)
		{
			if (haystack[tmpi] == needle[num1])
			{
				tmpi++;
				checker++;
			}
		}
		if (checker == length_needle)
			return (haystack + num);
		num++;
	}

	return (0);

}
