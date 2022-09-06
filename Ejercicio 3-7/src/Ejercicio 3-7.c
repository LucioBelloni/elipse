/*
	Belloni
	Lucio
 */

#include <stdio.h>
#include <stdlib.h>

int PedirNumero(void);
char realiciarOperacion(void);
int restarUno(int numUno, int numDos);
int sumarUno(int numUno, int numDos);





int main(void) {
	setbuf(stdout, NULL);

	int numUno;
	int numDos;
	int resultado;
	char operacion;

	numUno = PedirNumero();
	numDos = PedirNumero();

	operacion = realiciarOperacion();

	if(operacion == 's'){

		resultado = sumarUno(numUno, numDos);
		printf("La suma es: %d", resultado);
	}else{
		resultado = restarUno(numUno, numDos);
		printf("La resta  es %d", resultado);
	}



	return EXIT_SUCCESS;
}

int PedirNumero(void){

	int numUno;

	do{
		printf("Ingrese el numero");
		scanf("%d",&numUno);

	}while(numUno < 10 || numUno > 100);

	return numUno;
}

char realiciarOperacion(void){

	char sumaResta;

	do{
		printf("Ingrese 's'-sumar o 'r'-restar");
		fflush(stdin);
		scanf("%c",&sumaResta);
	}while(sumaResta !='s' && sumaResta !='r');


	return sumaResta;

}



int restarUno(int numUno, int numDos){
	int resultado;

	resultado = numUno - numDos;

	return resultado;
}
