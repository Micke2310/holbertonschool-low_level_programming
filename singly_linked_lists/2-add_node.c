#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{

list_t *new_n;  /*declaramos un nuevo nodo*/

new_n = malloc(sizeof(list_t)); /*asignamos memoria dinamica al nuevo nodo*/

	if (new_n == NULL ) /*verificamos si new_n fue creado*/
	{
	return (NULL);
	}

new_n->str = strdup(str); 
/*asignamos la cadena (str) a nuevo nodo y la duplicmos.*/

	if (new_n->str == NULL) /*verificamos si se duplico str con exito*/
	{
	free(new_n); /*liberamos memoria dinamica asignada al nuevo nodo*/
	/*si no utilizaremos mas, esa cadena, de lo contrario, no liberar*/
	return (NULL);
	}

new_n->len = (sizeof(str)); /*asignamos longitud de la cadena al nuevo nodo*/

new_n->next = *head; /*establecemos el siguiente nodo del nuevo nodo,*/
			/*como el nodo actual de la cabeza de la lista*/

*head = new_n; /*actualizamos la cabeza de la lista para que apunte al*/
			/*nuevo nodo */

return (new_n); /*retornamos la direccion del nuevo nodo*/


}
