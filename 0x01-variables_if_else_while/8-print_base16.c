#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char str[] = "0123456789abcdef\n";
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(str[i]);
	}

	return (0);

}
