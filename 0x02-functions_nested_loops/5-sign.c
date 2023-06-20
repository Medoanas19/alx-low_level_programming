#include "main.h"

/**
 * print_sign - Will print out the sign of a number
 * @n: This is the number that will be checked
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
