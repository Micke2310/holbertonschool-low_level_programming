# include "main.h"

/**
 * _isdigit - funcion que verificara si el caracter es un digito (del 0 al 9).
 * @c: es quien se chequea si es un digito
 *
 *Return: retorna 1 si es digito y 0 si no lo es.
 */

int _isdigit(int c)
{
int d = 0;

while (d >= 0 && d <= 9)
{
if (c == d + '0')
{
_putchar('1');
d++;
return (1);
}
else
{
_putchar('0');
d++;
}

}
return (0);
}
