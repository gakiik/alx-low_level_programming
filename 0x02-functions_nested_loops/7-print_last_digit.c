#include <limits.h>
#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: The intput number
 *
 * Return: 0 on Success
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int ln;
	long int N;

	N = (long int) n;
	if (N < 0)
	{
		N *= -1;
	}

	ln = N % 10;
	_putchar(48 + ln);
	return (ln);

}
