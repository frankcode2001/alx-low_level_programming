#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/
int _islower(char c)
{

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }

        else
        {
                return (0);

        }


}
int main()
{
        _islower('g');


}
