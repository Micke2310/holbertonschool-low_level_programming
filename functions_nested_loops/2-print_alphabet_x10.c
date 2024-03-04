#include "main.h"

/**
 *void print_alphabet_x10(void)
 *Description: imprime alphabeto 10 veces
 *Return: no tieene (Success)
 *2-print_alphabet_x10.c - Programa para imprimir el alfabeto 10 veces
 *
 */




void print_alphabet_x10(void)
{
char alphabet = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
alphabet = 'a';

/**
 *reiniciamos el valor de alphabet,
 *para comenzar de nuevo tras cda iteracion, por 10 veces.
 *
 */
}
}
