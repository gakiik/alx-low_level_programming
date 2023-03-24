#include "main.h"
/**
 * print_sign - check if input is greater than, less or equal zero
 * @n: The intput number to check
 *
 * Return: 1 if greater than zero, -1 if less than zero, 0 if n is zero
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
