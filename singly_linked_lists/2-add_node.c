#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists_h"


list_t *add_node(list_t **head, const char *str);


list_t *new_node;  /*declaramos un nuevo nodo*/

new_node = malloc(sizeof(list_t)); /*asignamos memoria dinamica al nuevo nodo*/
{
	if (new_node == NULL ) /*verificamos si new_node fue creado*/
	{
	return (NULL);
	}

new_node->str = strdup(str); 
/*asignamos la cadena (str) a nuevo nodo y la duplicmos.*/

	if (new_node->str == NULL) /*verificamos si se duplico str con exito*/
	{
	free(new_node); /*liberamos memoria dinamica asignada al nuevo nodo*/
	return (NULL);
	}

new_node->leng = strlen(str); /*asignamos longitud de la cadena al nuevo nodo*/

new_node->next = *head; /*establecemos el siguiente nodo del nuevo nodo,*/
			/*como el nodo actual de la cabeza de la lista*/

*head = new_node; /*actualizamos la cabeza de la lista para que apunte al*/
			/*nuevo nodo */

return (new_node); /*retornamos la direccion del nuevo nodo*/


}
