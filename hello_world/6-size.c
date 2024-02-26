#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	
	puts("Size of a char : ");
	printf("%zu bytes\n",sizeof(char));

	puts("Size of an int: ");
	printf("%zu bytes\n",sizeof(int));

 	puts("Size of a long int: ");
	printf("%zu bytes\n",sizeof(long));

	puts("Size of a long long int: ");
	printf("%zu bytes\n",sizeof(long long));

	puts("Size of a float: ");
	printf("%zu bytes\n",sizeof(float));



	return (0);
}
