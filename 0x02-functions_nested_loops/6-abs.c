#include "main.h"

/**
 *_abs - gets the absolute value of a number
 * @c: the number to get the absolute value
 * Return: c if c > 0 or the calculated absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absValue;

		absValue = c * -1;
		return (absValue);
	}
	else
	{
		return (c);
	}
}
