#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase with random step
 *              between 1 and 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    char alphabet = 'a';

    srand(time(0));
    n = rand() % 10 + 1;

    while (alphabet <= 'z')
    {
        putchar(alphabet);
        alphabet += n;
    }

    putchar('\n');

    return (0);
}
