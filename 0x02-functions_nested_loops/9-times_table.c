#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	int ln;
	int rn;
	int tmp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				ln = k / 10;
				_putchar(ln + '0');
			}
			rn = k % 10;
			_putchar(rn + '0');
			tmp = k + i;
			if (k <= 9 && tmp <= 9 && j != 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else if (j != 9 && k != 0)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
