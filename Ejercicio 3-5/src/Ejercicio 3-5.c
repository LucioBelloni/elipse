/*
	Belloni
	Lucio
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
int restarUno(int numUno, int numDos);
int restarDos(void);
void restarTres(int numUno , int numDos);
void restarCuatro(void);

int main(void) {
	setbuf(stdout, NULL);

	//int numUno;
	//int numDos;
	//int resta;


	//Ejercicio uno
	/*numUno = pedirNumero();
	numDos = pedirNumero();
	resta = restarUno(numUno,numDos);
	printf("La resta es: %d",resta);*/

	// Ejercicio Dos

	//resta = restarDos();
	//printf("La resta es: %d", resta);

	// Ejercicio Tres

	//restarTres( numUno , numDos);

	// Ejercicio Cuatro

	 restarCuatro();



	return EXIT_SUCCESS;
}

int pedirNumero(void){

	int PedirNumero;

	printf("Ingrese un numero");
	scanf("%d", &PedirNumero);

	return PedirNumero;

}

int restarUno(int numUno, int numDos){
	int resultado;

	resultado = numUno - numDos;

	return resultado;
}

int restarDos(void){
	 int numUno;
	 int numDos;
	 int resultado;

	 numUno = pedirNumero();
	 numDos = pedirNumero();

	 resultado = numUno - numDos;

	 return resultado;
}

void restarTres(int numUno , int numDos){

	int resultado;

	numUno = pedirNumero();
	numDos = pedirNumero();

	resultado = numUno - numDos;

	printf("La resta es %d", resultado);

}

void restarCuatro(void){

	int numUno;
	int numDos;
	int resultado;

	numUno = pedirNumero();
	numDos = pedirNumero();

	resultado = numUno - numDos;

	printf("La resta es %d", resultado);
}



