#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;

	if (argc < 1)
		return (0);

	for (num = 1; num < argc; num++)
	{
		if (!atoi(argv[num]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
