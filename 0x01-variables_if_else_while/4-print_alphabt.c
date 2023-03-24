#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char str[] = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0; i <= 24; i++)
	{
		putchar(str[i]);
	}

	return (0);

}
