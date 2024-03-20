 #include <stdio.h>

int main( int argc, char* argv);
{
	char letra = 'a';                                   /*  char; guardar caracteres */
	char *cadena = "%s";                                /* (* punteros) guarda cadenas de caracteres o string  */
	int signedNum = -15;                                /*  imprimir numeros enteros con signo, signednum */
	int numero = 12341234;                              /*  int, numeros enteros de base 10, digitos del 0 al 9*/
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

	printf(" imprime flotante %f. \n", miFloat);        /* imprime numero con coma  en notacion normal*/
	printf(" imprime flotante %e. \n", miFloat);        /* imprime numero flotante en notacion cientifica= 1.456789e+01, e+01 = 10 a la 1*/
                                                            /* imprime numero flotante en notacion cientifica= ............, e-01 = 10 a la -1*/
	printf(" imprime flotante %g. \n", miFloat);        /* imprime numero flotante en notacion que mas convenga automaticamente */

	printf(" imprime flotante %x. \n", numero);        /* imprime numero flotante en notacion exadecimal,base 16 , 0123456789abcdef*/
	printf(" imprime flotante %X. \n", numero);        /* imprime numero flotante en notacion exadecimal,base 16 , 0123456789abcdef*/


}/*HASTA AQUI VAN LOS EJEMPLOS DE MODIFICADOES O FORMATOS*/



/*DE AQUI PARA ABAJO ES EJMPLO DEL CODIGO EMPLEADO EN PRINTF*/
#include "main.h"
#include <stdarg.h>

/*
 *
 */

int _printf(const char *format, ...)
{
        va_list txt; /* txt es mi variable definida, que es iggual al la variable var definida en la funcion prototipo */
        int i = 0;
        count = 0; /* cuenta solamente cuando imprimes caracteres , no argumentos ni formatos, cada vez que se usa write,
                      suma un count, van juntos*/
        res = 0; /* variable declarada por mi para comparar que los resultados de las*/
                /*funciones den 0 cero, que es el valor correcto, por eso iguale a 0,*/
                /*en caso de que de otro valor, retornara el valor  de res en el return.*/


        if( format == NULL)  /*  sus NULL termina el proceso y retorna el error*/
        return (-1);

        va_start(txt,format); /*  vincula la variable tipo lista txt, con format, para cuando sean llamado los argumentos los reconozca*/

        while (format[i] != '\0')  /*  si esdistinto de 0 entro a comprobar hasta encontarr un %*/
        {
          if (format[i] != '%')  /*  cuando format el  no es porcentaje, procede a imprimir  */
          {
           write(1, &format[i], sizeof(char));
           i++;
           count++;
          }
         else    /*  tiene un porcentaje, entonces hay varias opciones con porcentaje    */
           {
          if (format[i+1] == '\0')  /*  si es '/0' termina el proceso y retorna el error*/
                return (-1);
          else if (format[i + 1] == '%')   /*  si i, esta en % , le sumo 1 para ver cual es la siguiete, si tambien es %, imprimo % */
           {
                write(1, &format[i], sizof(char));  /* 1 es la salida en pantalla, &format[i] es ubicacion en memoria de i, sizof da el tama o */
                i++;
                i++;
                count++;
           }
                else if (format[i + 1] == 'c')   /*  si i, esta en % , le sumo 1 para ver cual es la siguiete, si c, imprimo funcion char */
                {
                 count += print_char(txt); /* funcion que esta declarada el prototipo enel archivo .h del encabezado =  */
                i++;
                i++;
                 /* no va count, ya que no imprimo cracteres */
                }
                else if (format[i + 1] == 's')  /*  si i, esta en % , le sumo 1 para ver cual es la siguiete, si s, imprimo funcion string */
                {
                count += print_string(txt);  /* funcion que esta declarada el prototipo enel archivo .h del encabezado =  */
                i++;
                i++;
                /* no va count, ya que no imprimo caracteres */
                }
                else if (format[i + 1] == 'd' || format[i + 1] == 'i' ) /* si es igual a d o i , imprimo funcion dec (decimal) */
                {
                count += print_dec(txt);
                i++;    /* es igual a poner (i += 2) */
                i++;

                }
                else
                {
                write(1, &format[i] , sizeof(char));  /* estoy en porcentaje, imprimo prcentaje */
                i++;                                     /* sumo uno y me ubico en el proximo caracter */
                count++;                                     /* smo un contador */
                write(1, &format[i], sizeof(char));  /* estoy en el segundo cacater, lo imprimo */
                i++;
                counter++;
                }


         }

        }

va_end(txt); /*indica que los argumentos en la lista sinusar , no se van a usar, terminamos con la lista*/
return (count);
}
