#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: - times to print a line
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i, j;
		
		for (i = 0; i < n; i++)
		{

			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
		_putchar('\n');
	}
}
