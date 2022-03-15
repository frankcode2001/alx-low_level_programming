#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char first_alph;

	for (first_alph = 'a'; first_alph <= 'z'; first_alph++)
	{
		_putchar(first_alph);
	}
	_putchar('\n');
}
int main(void)
{
        print_alphabet();
	return (0);
}
