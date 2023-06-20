#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 18; d <= 28; d++)
	{
		putchar(d + '0');
		if (d != 28)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
