# include "main.h"

/**
 * _isdigit - funcion que verificara si el caracter es un digito (del 0 al 9).
 * @c: es quien se chequea si es un digito
 *
 *Return: retorna 1 si es digito y 0 si no lo es.
 */

int _isdigit(int c)
{

if (c >= '0' && c >= '9')
{
_putchar('1');
return (1);
}
else
{
_putchar('0');
return (0);
}

}
