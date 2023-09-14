#include "main.h"

/**
 * print_line - prints a line
 * @n: - times to print a line
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(36);
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar(36);
		_putchar('\n');
	}
}
