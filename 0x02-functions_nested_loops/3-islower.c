#include "main.h"

/**
 * _islower - Checks for lower case character
 * @c: is the character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
