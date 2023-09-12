#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case characters
 * Param: c - character to check whether it's lowercase
 * Returns: 1 (Success)
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
