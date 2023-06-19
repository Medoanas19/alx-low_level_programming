#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  assign a random number to the variable n each time it is executed
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is ", n);
	m = n % 10;
	if (m > 5)
	{
		printf("%i and is greater than 5/n", m);
	}
	else if (m == 0)
	{
		printf("%i and is 0/n", m);
	}
	else
	{
		printf("%i and is less than 6 and not 0/n", m);
	}
	return (0);
}
