#include <stdio.h>
/**
 * main - This program will print the size of various types using C
 * Return:0
 */
int main(void)
{
char c;
int i;
long int l;
long long int z;
float f;

printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("Size of a long int: %zu byte(s)\n", sizeof(l));
printf("Size of a long long int: %zu byte(s)\n", sizeof(z));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
}
