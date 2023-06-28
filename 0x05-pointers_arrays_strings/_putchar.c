#include <unistd.h>

/**
 * _putchar - Writes the char c to stdout
 * @c: The char to print
 *
 * Return: 0
 * on error, -1 is returned, and error no is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
