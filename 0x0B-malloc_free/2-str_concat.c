# include "main.h"
# include <stdlib.h>

/**
 *str_concat - concat 2 strings.
 *@s1: first string.
 *@s2: second string.
 *Return: pointer to string.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int num = 0, num1 = 0, num2 = 0;

	if (s1 != NULL)
		for (; s1[num]; num++)
		;
	if (s2 != NULL)
		for (; s2[num1]; num1++)
		;

	s = malloc(sizeof(char) * (num + num1 + 1));
	if (s == NULL)
		return (NULL);

	while (num2 < num)
	{
		s[num2] = s1[num2];
		num2++;
	}

	while (num2 < num + num1)
	{
		s[num2] = s2[num2 - num];
		num2++;
	}
	s[num2] = '\0';
	return (s);
}
