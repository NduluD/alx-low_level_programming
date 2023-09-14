#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int j, index;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (index = size - j; index > 0; index--)
			{
				_putchar(" ");
			}
			for (index = 0; index < j; index++)
			{
				_putchar('#');
			}
			if (j == size)
				continue;
			_putchar("\n");
		}
	}
	_putchar("\n");
}
