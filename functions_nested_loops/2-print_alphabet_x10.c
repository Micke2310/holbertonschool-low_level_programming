#include "main.h"

/**
*void print_alphabet_x10(void)
*
*
*
*Return: no tieene (Success)
*/

void print_alphabet_x10(void)
{

	char alphabet = 'a';
int i = 0;
 
while( alphabet <= 'z')
{
	for(i = 0; i < 10; i++)
	{
	_putchar(alphabet);
alphabet++;
	}
}
_putchar('\n');

}
