#include "main.h"
/**
 * print_alphabet_x10 - Imprime el alfabeto 10 
 * veces seguido de un salto de línea
 *
 * Esta función imprime el alfabeto en minúscula
 * s desde 'a' hasta 'z' diez veces, con cada
 * alfabeto impreso en una línea separada.
 * 2-print_alphabet_x10.c - 
 * Programa para imprimir el alfabeto 10 veces
 *
 * Este programa define la función print_alphabet_x10,
 * que imprime el alfabeto en minúsculas
 * diez veces, con cada alfabeto impreso en una línea separada.
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
}
}
