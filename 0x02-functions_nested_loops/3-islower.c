#include "main.h"
/**
 * _islower - check if charachter is lowercase
 * @c: The charachter to check
 *
 * Return: 1 if islower case 0 if not.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
