#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
