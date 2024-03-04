#include "main.h"

/**
* print_sign - es una funcion que verifica si los caracterse son signos
*
*@'n' es un argumeto de tipo int, el cual es comparado por print_sign.
*
*Retur: 1 si n es mayor que cero, -1 si es menor que 0 y 0 si es igual a 0.
*/

int print_sign(int n)
{
if (n > 0 )
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
