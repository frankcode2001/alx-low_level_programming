#include "main.h"

/**
 * _strlen - is a function that returns the length of a string
 * @s: string whose length is to be found
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int num = 0;

	while (*(s + num))
		num++;
	return (num);
}
