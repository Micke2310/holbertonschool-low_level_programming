#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Enter point
 *
 *9-print_comb.c
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = 0;
while (n <= 9)
{

putchar(n + '0');

if (n < 9)
{
putchar(',');
putchar(' ');
}
n++;
}



return (0);
}
