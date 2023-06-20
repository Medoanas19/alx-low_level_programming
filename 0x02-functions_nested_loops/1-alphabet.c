#include "main.h"

/**
 * print_alphabet - Prints out an alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		_putchar(word);
	_putchar('\n');
}
