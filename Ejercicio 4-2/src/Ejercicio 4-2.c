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

int pedirNumero(void);
int sumar(int numUno, int numDos, int* respuesta);

int main(void) {
	setbuf(stdout, NULL);

	int numUno;
	int numDos;
	int respuesta;
	int validar;

	numUno = pedirNumero();
	numDos = pedirNumero();

	validar = sumar( numUno, numDos, &respuesta);
	if(validar == 0 ){
		printf("La respues es %d",respuesta );
	}else{
		printf("Hubo un error");
	}



	return EXIT_SUCCESS;
}

int sumar(int numUno, int numDos, int* respuesta){

	int resultado;
	int rtn;


	resultado = numUno + numDos;

	if(resultado != 0 ){
		rtn = 0;
	}else{
		rtn = -1;
	}

	*respuesta = resultado;
	return rtn;
}

int pedirNumero(void){

		int numUno;

		printf("Ingrese el numero");
		scanf("%d",&numUno);

	return numUno;
}

