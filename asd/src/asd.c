/*
Belloni
Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define libretas  450

int main(void) {
	setbuf(stdout, NULL);

	int numeroDeLegajo;
	char estadoCivil;
	int edad;
	int anioDeIngreso;
	char genero;
	char respuesta;
	int contadorDePersonasMayor;
	int legajoDeLaPersonaMasTiempo;
	int edadDeLaPersonaMasTiempo;
	int banderaDeLaPersonaMasTiempo;
	int anioDeIngresoMasViejo;
	int libretasSinElDescuento;
	int contadorDeLibretas;
	int precioConDescuento;
	int acumuladorViejosLibretas;




	contadorDePersonasMayor = 0;
	banderaDeLaPersonaMasTiempo = 0;
	contadorDeLibretas = 0;
	precioConDescuento = 0;
	acumuladorViejosLibretas = 0;
	libretasSinElDescuento = 0;



	do{

		do{
				printf("ingrese su numero de legajo");
				scanf("%d",&numeroDeLegajo);
		}while(numeroDeLegajo < 1000|| numeroDeLegajo > 9999);

		do{
				printf(" ingrese el estado civil s/c/v ");
				fflush(stdin);
				scanf("%c",&estadoCivil);
		}while(estadoCivil  != 's' && estadoCivil != 'c' && estadoCivil != 'v');


		do{
				printf("Ingrese su edad");
				scanf("%d",&edad);
		}while(edad < 17 || edad > 75);

		do{
				printf("ingrese su año de ingreso ");
				scanf("%d",&anioDeIngreso);
		}while(anioDeIngreso <1949  || anioDeIngreso > 2022);

		do{
				printf(" ingrese el genero en  el cual se identifique m/f/o ");
				fflush(stdin);
				scanf("%c",&genero);
		}while(genero  != 'm' && genero != 'f' && genero != 'o' );



		if(edad > 60){
			contadorDePersonasMayor++;
			acumuladorViejosLibretas+= libretas;
		}

		if(genero == 'f'){

			if(banderaDeLaPersonaMasTiempo == 0){
				edadDeLaPersonaMasTiempo = edad;
				legajoDeLaPersonaMasTiempo = numeroDeLegajo;
				anioDeIngresoMasViejo = anioDeIngreso;
				banderaDeLaPersonaMasTiempo = 1;
			}else
				if(anioDeIngreso < anioDeIngresoMasViejo ){
					edadDeLaPersonaMasTiempo = edad;
					legajoDeLaPersonaMasTiempo = numeroDeLegajo;
					anioDeIngresoMasViejo = anioDeIngreso;

				}

		}

			contadorDeLibretas++;
			libretasSinElDescuento+= libretas;

			printf("\n  s/n Desea continuar?");
			fflush(stdin);
			scanf("%c",&respuesta);
			fflush(stdin);
	}while (respuesta == 's');

		fflush(stdin);

		printf("La cantidad de personas mayores a 60 es de %d",contadorDePersonasMayor );
		printf("El legajo y la edad de la mujer que ingreso hace mas tiempo es de %d %d", legajoDeLaPersonaMasTiempo , anioDeIngresoMasViejo );
		printf("Lo que debe abonar la facultad es de %d", libretasSinElDescuento);

		 if(contadorDeLibretas > 10){
			precioConDescuento = libretasSinElDescuento  * 0.90;
			printf( " \nEl precio con el 10 de porciento de descuento a pagar es de : %d", precioConDescuento );
		}else
		if(contadorDeLibretas > 5 ){
				precioConDescuento = libretasSinElDescuento * 0.95;
				printf("\nEl precio con el 5 porciento de descuento es  de: %d",precioConDescuento);
		}
		if(contadorDePersonasMayor > 60){
			precioConDescuento = acumuladorViejosLibretas * 0.75;
			printf("\n El precio con el 25  porciento de descuento es: %d", precioConDescuento );

		}

return EXIT_SUCCESS;
}

