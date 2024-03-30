#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: (count) The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
    size_t count = 0; /*Inicializamos un contador para llevar el registro del número de nodo*/

/*Bucle para recorrer la lista enlazada*/
    while (h != NULL)
    {
        count++; /*Incrementamos el contador en cada iteració*/
        h = h->next; /* Avanzamos al siguiente nodo*/
    }

    return count; /*Retornamos el número total de nodo*/
}
