#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int num = 0, num1;
	char i[] = " \t\n,;.!?\"(){}";

	while (*(s + num))
	{
		if (*(s + num) >= 'a' && *(s + num) <= 'z')
		{
			if (num == 0)
			{
				*(s + num) -= 'a' - 'A';
			}
			else
			{
				for (num1 = 0; num1 <= 12; num1++)
				{
					if (i[num1] == *(s + num - 1))
						(*(s + num) -= 'a' - 'A');
				}
			}
		}
		num++;
	}
	return (s);
}
