#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int _abs(int n)
{
	int m = -1;

	if (n<0)
	{
		int result = n*m;
		putchar(result + '0');

	}
	else
	{
		int result = n;
		putchar(result + '0');

	}

}
int main(void)
{
	_abs(3);


}
