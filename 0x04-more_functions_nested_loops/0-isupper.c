#include "main.h"
/**
 * _isupper - check if charachter is uppercase
 * @c: The charachter to check
 *
 * Return: 1 if islower case 0 if not.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
