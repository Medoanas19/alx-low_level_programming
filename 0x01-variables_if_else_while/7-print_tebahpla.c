#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char word;

	for (word = 'z'; word >= 'a'; word--)
	{
		putchar(word);
	}
	putchar('\n');
	return (0);
}
