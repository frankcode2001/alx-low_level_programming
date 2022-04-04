#include "main.h"
#include <stdlib.h>

/**
 *_strdup - allocate a string.
 *@str: string.
 *Return: pointer to string if success.
 */
char *_strdup(char *str)
{
	int num;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (num = 0; str[num]; num++)
	;
	num++;
	str1 = malloc(sizeof(char) * num);

	if (str1 == NULL)
		return (NULL);

	for (num = 0; str[num] != '\0'; num++)
		str1[num] = str[num];
	str1[num] = '\0';
	return (str1);
}
