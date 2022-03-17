#include "main.h"

/**
 * _isupper - is a function that checks if the parameter c is uppercase
 * if uppercase it returns 1 otherwise it returns 0
 * Description: Prints the alphabet with _putchar
 * @c: charater
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
