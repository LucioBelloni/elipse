/*
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int i;
	char mMinuculas;
	int contadorDeMinusculas;

	contadorDeMinusculas = 0;

	for(i = 0; i < 5;i++){

		printf("Ingrese un caracter");
		fflush(stdin);
		scanf("%c",&mMinuculas);

		if(mMinuculas == 'm'){
			contadorDeMinusculas++;
		}
}
printf("Las letras m (minusculas) es de: %d", contadorDeMinusculas );

	return EXIT_SUCCESS;
}
