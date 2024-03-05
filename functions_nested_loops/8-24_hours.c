#include "main.h"
/**
* jack_bauer - es una funcion que imprimira cada minuto de las 24 horas.
*
*
*
*Retur: ... vacio.
*/

void jack_bauer(void)
{
int hrs;
int min;


for (hrs = 0; hrs <= 23; hrs++)
{
for (min = 0; min <= 59; min++)
{
int hrs_left = hrs / 10;
int hrs_right = hrs % 10;

int min_left = min / 10;
int min_right = min % 10;


_putchar(hrs_left + '0');
_putchar(hrs_right + '0');

_putchar(':');

_putchar(min_left + '0');
_putchar(min_right + '0');
_putchar('\n');

}

}

}
