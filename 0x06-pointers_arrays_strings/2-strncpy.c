#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, num1 = 0;

	while (n > num1)
	{
		if (src[num1] == '\0')
		{
			for (; num1 < n; num1++)
			{
				dest[num] = '\0';
				num++;
			}
		}
		else
		{
			dest[num] = src[num1];
			num1++;
			num++;
		}
	}

	return (dest);
}
