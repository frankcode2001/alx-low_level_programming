#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *cd = "_putchar";

	while (*cd)
	{
		_putchar(*cd);
		cd++;
	}
	_putchar('\n');

	return (0);
}
