/*
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int inicializarArrays(int arrayEdades[],int cantElementos);
int pedirDatos(int* asd);



int main(void) {
	setbuf(stdout, NULL);

	int i;
	int listaEdad[TAM];
	int listaSalario[TAM];
	int legajo;
	int edad;
	float salario;
	int retorno;
	int retornoUno;
	char resp = 's';

	for(i = 0; i < TAM ; i++){
		listaEdad[i] = 0;
		listaSalario[i] = 0;
	}

	retorno = inicializarArrays(listaEdad,TAM);
	retornoUno = inicializarArrays(listaSalario,TAM);

	if(retorno == 0 && retornoUno == 0){


				//Carga aleatoria
		do{

			 pedirDatos();

			printf("Desea continuar ingresando legajos s/n");
			fflush(stdin);
			scanf("%c",&resp);

		}while(resp == 's');

		for(i = 0; i < TAM ; i++){
			if(listaEdad[i]!=0){
			printf("para el legajo %d, la edad es %d y el salario es %d",i,listaEdad[i], listaSalario[i]);
			}
		}
	}else{
		printf("algo salio mal en la inicializacion");
	}
	return EXIT_SUCCESS;
}

int inicializarArrays(int arrayEdades[],int cantElementos){
	int i;
	int retorno;
	retorno = -1;

	if(arrayEdades != NULL && cantElementos > 0 ){
		for(i = 0; i < cantElementos ; i++){
			arrayEdades[i] = 0;
		}
		retorno = 0;
	}
		return retorno;
}


int pedirDatos(void){

	int legajo;
	int edad;
	int salario;
	int listaEdad[TAM];
	int listaSalario[TAM];
	int retorno;

		printf("Que legajo queres completar? ");
		scanf("%d", &legajo);

		printf("Ingrese la edad");
		scanf("%d", &edad);
		listaEdad[legajo] = edad;

		printf("Ingrese el salario");
		scanf("%d", &salario);
		listaSalario[legajo] = salario;

		return  retorno;
}


/*
 //Carga secuencial
	for(i = 0; i < TAM ; i++){
		printf("\nIngrese una edad en el legajo  %d",i);
		scanf("%d", &listaEdades[i]);

		printf("\nIngrese un sueldo en  legajo  %d",i);
		scanf("%f", &listaSueldo[i]);

		acumuladorDeSueldo+=listaSueldo[i];

	}
	promedio = (float)acumuladorDeSueldo / TAM;

	// muestro los datos de mi array cargado
	for(i = 0; i < TAM ; i++){

			printf("la edad es %d\n y su sueldo es %.2f\n , su legajo es %d \ny su promedio total es %.2f\n", listaEdades[i],listaSueldo[i], i, promedio);

	}

 */


/*//Carga secuencial
for(i = 0; i < 5 ; i++){
	printf("\nIngrese una nota para la posicion %d",i);
	scanf("%d", &numero);
	listaNotas[i] = numero;

}

// muestro los datos de mi array cargado
for(i = 0; i < 5 ; i++){
		printf("\nLa nota para la posicion %d es: %d",i,listaNotas[i]);
}

*/
