#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 48; dig1 <= 56; dig1++)
	{
		for (dig2 = 49; dig2 <= 57; dig2++)
		{
			if (dig2 > dig1)
			{
				putchar(dig1);
				putchar(dig2);
				if (dig1 != 56 || dig2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}