#include "main.h"

/**
 * _isdigit - is a function that checks whether the input is a digit or not
 * if a digit it returns 1 otherwise it returns 0
 * Description: define if a character is a number
 * @c: charater
 * Return: 1 yes 0 no
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
