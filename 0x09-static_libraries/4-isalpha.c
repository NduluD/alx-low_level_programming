#include "main.h"
#include <ctype.h>
/**
 * _isalpha -  checks for alphabetic character
 *@c: character to check
 * Return: 1 for alphabetic character or 0 for any other character
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
