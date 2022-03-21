#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: always 0
 */
int main(void)
{
	int num, num1, num2, num3;
	char ar1[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ar2[58];

	srand(time(NULL));
	while (num3 != 2772)
	{
		num = num2 = num3 = 0;
		while ((2772 - 122) > num3)
		{
			num1 = rand() % 62;
			ar2[num] = ar1[num1];
			num3 += ar1[num1];
			num++;
		}
		while (ar1[num2])
		{
			if (ar1[num2] == (2772 - num3))
			{
				ar2[num] = ar1[num2];
				num3 += ar1[num];
				num++;
				break;
			}
			num2++;
		}
	}
	ar2[num] = '\0';
	printf("%s", ar2);
	return (0);
}
