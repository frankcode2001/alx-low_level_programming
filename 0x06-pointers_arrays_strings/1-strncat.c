#include "main.h"

/**
 *_strncat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, num1 = 0;

	while (dest[num] != '\0')
		num++;

	while (src[num1] != '\0' && n > num1)
	{
		dest[num] = src[num1];
		num1++;
		num++;
	}
	if (n > 0)
	{
		dest[num] = '\0';
	}

	return (dest);
}
