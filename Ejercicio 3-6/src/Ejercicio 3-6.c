/*
	Belloni
	Lucio
 */

#include <stdio.h>
#include <stdlib.h>

float realizarDescuento(int num);


int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	float descuento;

	do{
		printf("Ingrese el numero");
		scanf("%d",&numero1);

	}while(numero1 < 10 || numero1 > 100);

	descuento = realizarDescuento(numero1);
	printf("El resultado %.2f",descuento );

	return EXIT_SUCCESS;
}

float realizarDescuento(int num){
	 float descuento;

	 descuento = num * 0.95;

	 return descuento;
}

