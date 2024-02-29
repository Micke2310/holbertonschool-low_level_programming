#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet = 'a';


while (alphabet <= 'd' && alphabet >= 'f' && alphabet <'q' && alphabet <='z')
{
putchar(alphabet);
alphabet++;
}

putchar('\n');

return (0);
}
