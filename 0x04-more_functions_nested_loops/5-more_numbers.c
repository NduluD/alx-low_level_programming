#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int c, j;

	for (c = 0; c < 10; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
