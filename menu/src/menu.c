/*
 ============================================================================
 Name        : menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char respuesta;
	char opciones;

	do{
		printf("a -Iniciar \n"
			"b -Procesar \n"
			"c -Finalizar \n"
			"d -Salir\n");
		fflush(stdin);
		scanf("%c",&respuesta);

		printf("Ingrese la opcion");
		scanf("%c",&opciones);

	switch(opciones){
		case 'a':
			printf("Iniciando");
		break;

	};


	}while(respuesta == 'd');







	return EXIT_SUCCESS;
}
