/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float pedirNumero(void);

int main(void) {
	setbuf(stdout, NULL);

	printf("El numero es %.2f ", pedirNumero());


	return EXIT_SUCCESS;
}

float pedirNumero(void){
	float numero;

	printf("Ingrese un numero flotante");
	scanf("%f", &numero);

	return numero;

}
