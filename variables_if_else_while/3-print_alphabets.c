#include <stdio.h>

/**
 *main - Enter point
 *3-print_alphabets.c
 *Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;

alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
alphabet = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');


return (0);
}
