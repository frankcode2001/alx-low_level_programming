#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 48; dig1 < 58; dig1++)
	{
		for (dig2 = 49; dig2 < 58; dig2++)
		{
			for (dig3 = 50; dig3 < 58; dig3++)
			{
				if (dig3 > dig2 && dig2 > dig1)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(dig3);
					if (dig1 != 55 || dig2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
