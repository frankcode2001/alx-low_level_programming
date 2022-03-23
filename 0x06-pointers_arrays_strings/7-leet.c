#include "main.h"

/**
 *leet - encodes a string into 1337.
 *@s: string to encode.
 *Return: the encoded string.
 */
char *leet(char *s)
{
	int num = 0, num1 = 0;
	char arr_lt[] = {'4', '3', '1', '0', '7'};
	char array_high[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[num] != '\0')
	{
		for (num1 = 0; num1 < 5; num1++)
		{
			if (s[num] == array_low[num1] || s[num] == array_high[num1])
				s[num] = arr_lt[num1];
		}
		num++;
	}

	return (s);
}
