#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
        int a;
        int b;
        int c;
        int d;
        int e;

        b = n;
        e = a =  1;
/*Check for a negative number*/
        if (b < 0)
        {
                b *= -1;
                _putchar('-');
        }

        d = b;
        while (d >= 10)
        {
                a++;
                d /= 10;
        }
/*Create a number to the power(exponent)*/
        for (c = 1; c < a; c++)
                e *= 10;

        while (e > 1)
        {
                _putchar((b / e) % 10 + '0');
                e /= 10;
        }
        _putchar(b % 10 + '0');
}
