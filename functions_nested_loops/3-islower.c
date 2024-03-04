#include "main.h"

/**
 *int_islower(int c) - enter point.
 *_islower funcion is greate, verifica un caracter en minuscula
 *'c' parameter is int, es el caracter a verificar
 *Description: when c is lowercase return 1, otherwise return 0
 *Return: 1 is lowercase, 0 otherwise
 */


int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}


}
