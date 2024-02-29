#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Enter point
 *
 *
 *
 *
 *Return: Always 0 (Succes)
 */



int main(void)
{
char alphabet = 'z';
while (alphabet >= 'a' && alphabet <= 'z')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');

return (0);
}
