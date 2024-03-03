#include "main.h"

/**
*print_alphabet - Enter point
*
*
*
*Return:no is necessary because is VOID the type de return,
*only needs in funcion main your retur is INT (number entire)
*/

void print_alphabet(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
	_putchar(alphabet);
	alphabet++;
}
_putchar('\n');

/*return (0); Return:no is necessary because is VOID the type de return,
 *only needs in funcion main your retur is INT (number entire)
 */
}
