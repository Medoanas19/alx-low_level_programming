#include "main.h"

/**
 * print_last_digit - this will print out last four nums
 * @n: The is the int to be used
 * Return: output of the last 4 digits
 */
int print_last_digit(int n)
{
	int L;

	L = n % 10;
	_putchar('0' + L);
	return (L);
}
