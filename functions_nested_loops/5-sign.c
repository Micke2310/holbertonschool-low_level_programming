#include "main.h"

/**
 * print_sing - imprime el signo de un numero
 * @n: el numero a verificar
 *
 * Return: 1 si n es positivo, -1 si es negativo y 0 si es 0.
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
