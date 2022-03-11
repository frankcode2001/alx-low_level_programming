#include <stdio.h>

/**
* main - prints the alphabet in lowercase
* then uppercase followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++) {
		putchar(alph);
	}

	for (alph = 'A'; alph <= 'Z'; alph++) {
		putchar(alph);
	}

	putchar('\n');
	return (0);
}
