#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char alphabet = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}

	putchar('\n');

	return (0);
}
