#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int l;
	int p;

	for (l = 0; l <= 8; l++)
	{
	for (p = l + 1; p <= 9; p++)
	{
		putchar(l + '0');
		putchar(p + '0');
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
