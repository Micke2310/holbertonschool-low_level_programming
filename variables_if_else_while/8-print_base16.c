#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *main - Enter point
 *
 *8-print_base16.c
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	int n = 0;
	char alphabet = 'a';
while (n >= 0 && n <= 9)
{
putchar(n + '0');
n++;
}

while (alphabet >= 'a' && alphabet <= 'f')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');

return (0);
}
