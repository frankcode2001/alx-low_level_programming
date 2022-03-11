#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig2 < 100; dig1++)
	{
		for (dig2 = 0; dig2 < 100; dig2++)
		{
			if (dig1 < dig2)
			{
				putchar((dig1 / 10) + 48);
				putchar((dig1 % 10) + 48);
				putchar(' ');
				putchar((dig2 / 10) + 48);
				putchar((dig2 % 10) + 48);
				if (dig1 != 98 || dig2 != 99)
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
