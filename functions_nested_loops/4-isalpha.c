#include "main.h"

/**
 * _isalpha - Verifica si un carácter es una letra del alfabeto
 * @c: El carácter a verificar
 *
 * Return: 1 si el carácter es una letra del alfabeto, 0 en caso contrario
 *
 * Descripción: La función _isalpha verifica si el carácter dado es una letra del alfabeto.
 *              Devuelve 1 si el carácter es una letra del alfabeto (mayúscula o minúscula)
 *              y 0 si no lo es.
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
