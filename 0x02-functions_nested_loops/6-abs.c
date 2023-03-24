#include "main.h"
/**
 * _abs - get the absolut value of a number
 * @n: The intput number to check
 *
 * Return: 0 on Success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n < 0)
	{
		return (n * -1);
	}

	return (0);
}
