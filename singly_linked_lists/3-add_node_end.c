#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * _strlen - Returns the length of a string.
 * @str: The string.
 *
 * Return: len
 */

size_t _strlen(const char *str)
{
        size_t len = 0;

        while (str[len] != '\0')
        len++;

        return (len);
}



/**
 * *add_node_end - Adds a new node at the end of a list_t.
 * @head: pointer to a pointer to the head of the list_t.
 * @str: string to add as the content of the new node.
 *
 * Return: If str is NULL, return NULL else,return the address the new element
 */

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
		free(new_n);		/*libera ell espacio resrvado cn FREE*/
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
		last_n = last_n->next;
		}

	last_n->next = new_n;	/*enlazar nuevo nodo al ultimo nodo*/

return (new_n);

}
