#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			c = (a * b);
			if ((c / 10) > 0)
			{
				putchar((c / 10) + '0');
			}
			else
			{
				putchar(' ');
			}
			putchar((c % 10) + '0');

			if (b < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

}
int main(void)
{

	times_table();

}
