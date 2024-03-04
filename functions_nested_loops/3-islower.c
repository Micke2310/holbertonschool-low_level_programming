#include "main.h"

/**
*int _islower(int c)
*
*Return: 1 is lowercase, 0 otherwiae
*/


int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
_putchar(c + '1');
c++;
}
else
{
_putchar(c + '0');
c++;
}
return (0);
}
