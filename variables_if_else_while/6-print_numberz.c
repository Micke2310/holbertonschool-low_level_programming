#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Enter point
 *
 *6-print_numberz.c
 *
 *Return: Always o (Success)
 */


int main(void)
{
int n = 0;

while (n >= 0 && n <= 9)
{
putchar(n + 0);
n++;
}
putchar('\n');

return (0);
}
