#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char n;
	int i=0;

	while (i<10)
	{
		for (n='a'; n<='z'; n++)
		{
			putchar(n);

		}
		i++;
		putchar('\n');

	}

}
int main(void)
{

	print_alphabet_x10();

}
