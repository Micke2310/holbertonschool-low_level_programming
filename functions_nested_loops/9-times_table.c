#include "main.h"

/**
* times_table - imprimir la tabla del 9.
*
*
*
*Retur: ... vacio
*/

void times_table(void)
{
int left , up , result;


for (left = 0; left <= 9 ; left++)
{
	for (up = 0; up <= 9; up++)
	{
	result = left * up;
	if (left == 0)
	{
	_putchar('0');
	} else if ( result < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(result + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar((result / 10) + '0');
	_putchar((result % 10)+ '0');
	
	}
	
	
	
	
	}
_putchar('\n');

}


}
