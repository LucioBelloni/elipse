/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ejecutarParNoPar(int num);


int main(void) {
	setbuf(stdout, NULL);
	int num;

	printf("Ingrese un numero");
	scanf("%d", &num);
	if(ejecutarParNoPar(num) == 1 ){

		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}



	return EXIT_SUCCESS;
}

int ejecutarParNoPar(int num){


	if((num % 2) ==  0){
		return 1;
	}else{
		return 0;
	}

}
