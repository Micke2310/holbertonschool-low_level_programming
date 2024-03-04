#include "main.h"

/**
 * _islower - Verifica si un carácter es minúsla
 * @c: El carácter a verificr
 *
 * Return: 1 si c es una minúscula, 0 en caso contraro.
 *
 * Descripción
 * La función _islower verifica si un carácter dado es una letra miuscula.
 * Devuelve 1 si el carácter es una minúscula y 0 si no los.
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
