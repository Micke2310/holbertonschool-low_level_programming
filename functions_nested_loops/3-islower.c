#include "main.h"

/**
 * _islower - Verifica si un carácter es minúscu
 * @c: El carácter a verifica
 *
 * Return: 1 si c es una minúscula, 0 en caso contrari
 *
 * Descripción: La función _islower verifica si un carácter dado es una letra minúsc
 *              Devuelve 1 si el carácter es una minúscula y 0 si no lo e
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
