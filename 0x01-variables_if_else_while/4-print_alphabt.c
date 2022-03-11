#include <stdio.h>

/*
* main - prints all letters of the alphabet followed by a new line
* except q and e
* Return: 0 (Success)
*/
int main(void)
{
	char alph = 'a';


	while (alph <= 'z') {
		if (alph != 'e' && alph != 'q') {
			putchar(alph);

		}
		alph++;
	}
	putchar('\n');
	return (0);

}
