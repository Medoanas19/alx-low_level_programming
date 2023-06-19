#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		if (word != 'q' && word != 'e')
		{
			putchar(word);
		}
	}
	putchar('\n');
	return (0);
}
