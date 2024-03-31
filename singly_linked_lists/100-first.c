#include <stdio.h>

/* Función que imprime el mensaje antes de ejecutar main */
void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Imprime el mensaje antes de ejecutar main
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
