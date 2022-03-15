#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int first_alph;

	for (first_alph = 'a'; first_alph <= 'z'; first_alph++)
	{
		_putchar(first_alph);
	}
	_putchar('\n');
}
