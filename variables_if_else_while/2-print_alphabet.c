#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * more headers goes there
 * 2-print_alphabet.c
 * betty style doc for function main goes there
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char alphabet = "a";

srand(time(0));
n = rand() - RAND_MAX / 2;
while (alphabet <= "z")
{
putchar(alphabet);

alphabet = +1;

}

putchar("\n");

return (0);
}
