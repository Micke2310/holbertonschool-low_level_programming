#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_n, *last_n;
	/*declaro dos punteros tipo list_t para el nuevo y el ultimo nodo*/

	new_n = malloc(sizeof(list_t)); /*asignamos memoria al nuevo nodo*/

		if (new_n == NULL)  /*comprobamos que new_n esite*/
		{
		return (NULL);
		}


	new_n->str = strdup(str);/* duplicamos la cadena str yla asignamos al*/
				/* campo str del nuevo nodo*/

		if (new_n->str == NULL) /*cmprbams si duplicacion fue exitosa*/
		{			/*si lo fue ,no entra, sino lo fue,*/
		free(new_);		/*libera ell espacio resrvado cn FREE*/
		return (NULL);		/*retorna NULL*/
		}

	new_n->len = _strlen(str);	/*establece longitud de cadena*/
					/*_strlen esta definido en lists.h*/

	new_n->next = NULL;		/*establecer siguiente nodo cmo NULL*/
				/*porque este,sera el ultimo nodo de la lista*/

		if (*head == NULL)	 /*si lista esta vacia el nuevo nodo*/
		{
		*head = new_n;		/*sera la cabeza == nuevo nodo*/
		return (new_n);
		
		}

	last_n = *head;		/*si lista no es vacia, buscar ultimo nodo*/
		while (last_n->next != NULL)
		{
		last_n = last_node->next;
		}

	last_n->next = new_node;


}
