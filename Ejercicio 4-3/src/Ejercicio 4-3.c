/*
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>

void cargaDeTemperaturaEnCelsius(float* respt);
void cargaDeTemperaturaEnFahrenheit(float* respt);
void conversionFahrenheitACelsius(float valorA, float* resp);
void conversionCelsiusAFahrenheit(float valorA, float* resp);


int main(void) {
	setbuf(stdout, NULL);

	float tempCelsius;
	float tempFahrenheit;
	float convensorFahrenheit;
	float conversorCelsius;

	cargaDeTemperaturaEnCelsius(&tempCelsius);
	cargaDeTemperaturaEnFahrenheit( &tempFahrenheit);

	conversionFahrenheitACelsius(tempFahrenheit , &convensorFahrenheit);
	conversionCelsiusAFahrenheit(tempCelsius, &conversorCelsius);
	printf("La temperatura de Fahrenheit a  Celsius es: %.2f \n",convensorFahrenheit);
	printf("La temperatura de Celsius a  Fahrenheit es: %.2f \n",conversorCelsius);

	printf("La temperatura a Celsius es: %.2f \n", tempCelsius);
	printf("La temperatura a Fahrenheit es: %.2f \n", tempFahrenheit);
	return EXIT_SUCCESS;
}

void cargaDeTemperaturaEnCelsius(float* respt){

	float valorCelsius;

	do{
		printf("Ingrese una temperatura en Celsius ");
		scanf("%f", &valorCelsius);
		*respt = valorCelsius;

	}while(valorCelsius < 0 || valorCelsius > 100 );

}

void cargaDeTemperaturaEnFahrenheit(float* respt){

	float valorFahrenheit;

		do{
			printf("Ingrese una temperatura en Fahrenheit ");
			scanf("%f", &valorFahrenheit);
			*respt = valorFahrenheit;

		}while(valorFahrenheit < 32 || valorFahrenheit > 212 );

}

void conversionFahrenheitACelsius(float valorA, float* resp){

		float resultado;

		resultado = (valorA - 32) * 5/9;

		*resp  = resultado;

}


void conversionCelsiusAFahrenheit(float valorA, float* resp){

		float resultado;

		resultado = (valorA * 9/5 ) + 32;

		*resp  = resultado;

}















