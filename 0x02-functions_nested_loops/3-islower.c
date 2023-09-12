#include "main.h"
/**
 * _islower - checks for lower case characters
 *@c: character to check whether it's lowercase
 * Return: 1 for lowercase character or 0 for any other character
 */

int _islower(int c)
{
	if (c >= 97 && c c<= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
