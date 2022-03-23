#include "main.h"

/**
 * _strcmp - compare two strings.
 *@s1: string 1.
 *@s2: string 2.
 *Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int num = 0, cmp = 0;

	while (s1[num] != '\0' && s2[num] != '\0' && cmp == 0)
	{
		cmp = s1[num] - s2[num];
		num++;
	}

	return (cmp);
}
