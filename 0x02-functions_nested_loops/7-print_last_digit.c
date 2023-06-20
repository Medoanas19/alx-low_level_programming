#include "main.h"

/**
 * print_last_digit - this will print out last four nums
 * @n: The is the int to be used
 * Return: output of the last 4 digits
 */
int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
	{
	l_digit = l_digit * -1;
	}
	_putchar(l_digit + '0');
	return (l_digit);
}
