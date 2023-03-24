#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabets in lowercase to the stdo 10 times
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			_putchar(str[j]);
		}
	}

}
