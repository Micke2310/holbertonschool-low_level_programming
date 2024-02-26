#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	
	char Achar;
	int Bint;
	long int Clongint;
	long long Dlonglong;
	float Efloat;


	printf("Size of a char :%zu bytes\n",(unsigned long) sizeof(Achar));

	
	printf("Size of a char :%zu bytes\n",(unsigned long) sizeof(Bint));

 	
	printf("Size of a char :%zu bytes\n",(unsigned long) sizeof(Clong));

	
	printf("Size of a char :%zu bytes\n",(unsigned long) sizeof(Dlonglong));

	
	printf("Size of a char :%zu bytes\n",(unsigned long) sizeof(Efloat));



	return (0);
}
