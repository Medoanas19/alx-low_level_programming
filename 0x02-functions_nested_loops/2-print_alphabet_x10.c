#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int b;
	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 26; b++)
	{
		_putchar(letter[b]);
	}
		_putchar('\n');
	}
}
