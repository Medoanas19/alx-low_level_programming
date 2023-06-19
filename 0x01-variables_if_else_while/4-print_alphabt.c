#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char word[24] = "abcdfghijklmnoprstuvwxyz";
	int R;

	for (R = 0; R < 26; R++)
	{
		if (R != 'q' && R != 'e')
		{
			putchar(word[R]);
		}
	}
	putchar('\n');
	return (0);
}
