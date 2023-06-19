#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char word[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int R;

	for (R = 0; R < 52; R++)
	{
		putchar(word[R]);
	}
	putchar('\n');
	return (0);

}
