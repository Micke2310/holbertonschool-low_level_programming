#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_list - prints all the elemnts of a list_t.
 * @h: a pointer to the head of the list_t.
 *
 * return: the number of nodes in the list.
 */



size_t print_list(const list_t *h)
{
size_t count = 0; /* size_t , tipo de dato sin signo, */
/*calcula tamaños de memo,puede contener el numero maximo de unamatriz*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[%d] (nil)\n", 0);
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}


