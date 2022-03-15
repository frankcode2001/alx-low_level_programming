#include <stdio.h>

int print_sign(int n)
{

	if (n>0)
	{
		putchar('+');
		return (1);

	}
	else if (n==0)
	{
		putchar('0');
		return (0);

	}
	else if (n<0)
	{
		putchar('-');
		return (-1);

	}


}
int main(void)
{
	print_sign(0);

}
