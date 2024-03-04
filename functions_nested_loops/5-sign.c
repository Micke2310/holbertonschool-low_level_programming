#include "main.h"

/**
 * print_sign - imprime el signo de un númer
 * @n: el número a verifica
 *
 * Return: 1 si n es positivo, 0 si n es cero, -1 si n es negativo
 */


int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
