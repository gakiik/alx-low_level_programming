#include "main.h"
/**
 * print_alphabet - writes the alphabets in lowercase to the stdo
 *
 * Return: void.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i <= 26; i++)
	{
		_putchar(str[i]);
	}

}
