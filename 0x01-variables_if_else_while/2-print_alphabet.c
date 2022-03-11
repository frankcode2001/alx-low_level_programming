#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int num;

	for (num = 0; num < 26; num++)
	{
		putchar(alph[num]);
	}
	putchar('\n');
	return (0);
}
