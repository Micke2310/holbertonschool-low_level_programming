#include "main.h"

/**
 *-isdigit - verifica si el valor es un digito del 0 al 9.
 *@c: es quien se compara
 *
 *Return: si es digito retorna 1 si no, 0.
 *
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
