#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements.
 * @h: pointer to the head of the list_t.
 *
 * Return: (count) The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
/*Inicializamos un contador para llevar el registro del número d nodos*/

    while (h != NULL)
    {
        count++; /*Incrementamos el contador en cada iteracion*/
	h = h->next;  /*avanzamos al ssiguiente nodo*/
    }
return (count); /*Retornamos el número tota*/

}
