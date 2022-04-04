#include "main.h"
#include <stdlib.h>

/**
 *create_array - allocate an array.
 *@size: size of arrray.
 *@c: char.
 *Return: pointer to char if success.
 */
char *create_array(unsigned int size, char c)
{
	char *tmp = malloc(sizeof(char) * size);
	unsigned int num;

	if (size == 0 || tmp == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		tmp[num] = c;
	return (tmp);
}
