#include "main.h"

/**
 * _strcpy - copies string pointed to by src to the buffer pointed to by dest including the terminating null byte (\0)
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (*(src + num))
	{
		*(dest + num) = *(src + num);
		num++;
	}
	*(dest + num) = '\0';
	return (dest);
}
