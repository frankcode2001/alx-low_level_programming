#include "main.h"

/**
 *rot13 - encoding a string using rot13.
 *@s: the string to be encoded to rot13.
 *Return: the string s encoded to rot13.
 */
char *rot13(char *s)
{
	int num = 0, num1 = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[num] != '\0')
	{
		do {
			if (s[num] == string_alpha[num1])
			{
				s[num] = string_rot13[num1];
				break;
			}
			num1++;
		} while (string_alpha[num1] != '\0');
		num1 = 0;
		num++;
	}

	return (s);
}
