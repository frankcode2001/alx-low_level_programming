#include <stdio.h>

/**
* main - prints the lowercase alphabet  in reverse order
* followed by a new line
*Return: Always (0) Success
*/
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;

	}
	putchar('\n');
	return (0);


}
