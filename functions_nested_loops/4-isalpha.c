#include "main.h"

/**
 * _isalpha : - es una llamada a funcion que verifica caracteres
 * @'c': es un argumento de tipo int
 *Return: si son alphabeticos return 1.
 *si no lo son retirn 0.
 *
 */


int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
