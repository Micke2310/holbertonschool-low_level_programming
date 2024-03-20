 #include <stdio.h>

int main( int argc, char* argv);
{
	char letra = 'a';                                   /*  char; guardar caracteres */
	char *cadena = "%s";                                /* (* punteros) guarda cadenas de caracteres o string  */
	int signedNum = -15;                                /*  imprimir numeros enteros con signo, signednum */
	int numero = 12341234;
	long largoNumero = 1234567889;                      /*  para usar numeros muy largos , de 8 bits*/
	long largoChar =;
	long largoCadena=;
	float miFloat = 14.5678;


	printf("la variable vale %c. \n", letra);           /*   imprime 1 char caracter de tabla ASCII*/
	
	printf("la cadena vale   %s. \n", cadena);          /*  imprime  chae en una cadena de caracteres, string */
	
	printf("el numero vale   %d. \n", numero);          /*  imprime int numeros enteros con y sin signo  */
	printf("el numero vale   %i. \n", numero);          /*  imprime int numeros enteros con y sin signo */

	printf("el numero vale   %lc. \n", largoChar);      /* imprime char , caracteres, largos de tipo long de 8 bits */
        printf("el numero vale   %ls. \n", largoCadena);    /* imprime char, string, largos de tipo long de 8 bits */
	printf("el numero vale   %ld. \n", largoNumero);    /* imprime int , numeros largos de tipo long de 8 bits */

	printf(" imprime numero  %u. \n", signedNum);       /* imprime int  numeros sin signos  */

	printf(" imprime flotante %f. \n", miFloat);        /* imprime numero con coma  en notacionnormal*/
	printf(" imprime flotante %e. \n", miFloat);        /* imprime numero flotante en notacion cientifica*/





}
