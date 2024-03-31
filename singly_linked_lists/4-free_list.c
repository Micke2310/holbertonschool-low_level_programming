#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * free_list - Libera la memoria asignada a una lista
 * @head: puntero al primer nodo de la lista
 */
void free_list(list_t *head)
{
	list_t *tmp;  /* Declara un puntero temporal para recorrer la lista */

	while (head != NULL)  /* Itera mientras head no sea NULL (haya nodos)*/
	{
	tmp = head;  /*Asigna head a tmp pra mantener referencia al no actual*/
	head = head->next;  /* Avanza head al siguiente nodo */

	/* Libera la memoria de la cadena str en el nodo actual */
	free(tmp->str);
	/* Libera la memoria del nodo actual */
	free(tmp);
	}
}
