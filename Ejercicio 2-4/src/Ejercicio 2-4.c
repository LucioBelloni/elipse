/*
Belloni
Lucio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int i;
	int banderaDelMenorNumero;
	int numeroMenor;
	int banderaDeLosPares;
	int mayorNumero;
	int productosDeLosNegativos;
	int mayorNumeroD;
	int banderaDelMayor;
	int lugarIngresado;


	banderaDelMenorNumero = 0;
	banderaDeLosPares = 0;
	productosDeLosNegativos = 1;
	banderaDelMayor = 0;


	for(i=0; i< 8; i++){

		do{
			printf("Ingrese un numero entero");
			scanf("%d", &numero);

		}while(numero == 0);




		if(banderaDelMenorNumero == 0){
			numeroMenor =  numero;
			banderaDelMenorNumero = 1;
		}else{
			if(numero < numeroMenor){
				numeroMenor = numero;
			}
		}

		if(numero % 2 == 0 && banderaDeLosPares == 0 ){
			mayorNumero = numero;
			banderaDeLosPares = 1;
		}else{
			if(numero > mayorNumero){
				mayorNumero = numero;
			}
		}


		if(numero > mayorNumeroD || banderaDelMayor == 0){
			mayorNumeroD = numero;
			lugarIngresado = i  + 1;
			banderaDelMayor = 1;
		}

		if(numero < 0){
			productosDeLosNegativos *= numero;
		}


	}


	printf("\nEl menor numero ingresado es: %d", numeroMenor);
	printf("\nEl mayor numero de los pares es: %d",mayorNumero);
	if(numero > 0){
			printf("\nNo hay numero negativo");
	}else{
		printf("\nEl producto de los negativos es: %d", productosDeLosNegativos);
	}
	printf("\nEl lugar que fue ingresado el numero mayor es : %d", lugarIngresado);

	return EXIT_SUCCESS;
}
