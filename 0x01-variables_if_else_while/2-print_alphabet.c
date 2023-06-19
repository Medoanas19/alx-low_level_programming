#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{	char word[26] = "abcdefghijklmnopqrstuvwxyz";
	int R;

	for (R = 0; R < 26; R++)
	{
		putchar(word[R]);
	}
	putchar('\n');
	return (0);
}
