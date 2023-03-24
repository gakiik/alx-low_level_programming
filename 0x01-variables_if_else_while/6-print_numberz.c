#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		int c = i + 48;

		putchar(c);
	}

	putchar('\n');
	return (0);

}
