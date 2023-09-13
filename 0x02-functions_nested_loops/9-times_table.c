#include "main.h"

/**
 *times_table -  prints the 9 times table, starting with 0
 *Return void;
 */

void times_table(void)
{
	int i, j, mul, u, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul > 9)
			{
				u = mul % 10;
				d = (mul - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
