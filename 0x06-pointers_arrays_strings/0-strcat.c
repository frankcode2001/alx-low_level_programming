#include "main.h"

/**
 *_strcat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *Return: string.
 */
char *_strcat(char *dest, char *src)
{
	int num = 0, num1 = 0;

	while (dest[num] != '\0')
		num++;

	while (src[num1] != '\0')
	{
		dest[num] = src[num1];
		num++;
		num1++;
	}

	dest[num] = '\0';

	return (dest);
}
