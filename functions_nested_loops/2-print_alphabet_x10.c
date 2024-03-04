#include "main.h"

/**
 *void print_alphabet_x10(void)
 *
 *Return: no tieene (Success)
 */

void print_alphabet_x10(void)
{
char alphabet = 'a';
int i;
for( i = 0; i < 10; i++)
{
while(alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
alphabet = 'a';
/**reiniciamos el valor de alphabet,
 * para comenzar de nuevo tras cda iteracion, por 10 veces.*/
}
}
