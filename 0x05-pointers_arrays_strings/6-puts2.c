#include "main.h"

/**
 * puts2 - prints every other character of a string to stdout
 *
 * Return: void
 */
void puts2(char *str)
{
        int num = 0;
        
        while (*(str + num))
        {
                _putchar(*(str + num));
                num = num + 2;
        }
        _putchar('\n');
}
