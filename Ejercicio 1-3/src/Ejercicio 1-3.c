/*
 Belloni
 Lucio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroA;
	int numeroB;
	int numeroC;
	    printf("Ingrese un numero");
	    scanf("%d", &numeroA);
	    printf("Ingrese un numero");
	    scanf("%d", &numeroB);
	    printf("Ingrese un numero");
	    scanf("%d", &numeroC);
	 if((numeroA > numeroB && numeroA < numeroC) || (numeroA > numeroC && numeroA < numeroB)){
		 printf("El numero intermedio es: %d", numeroA);
	    }
	 else{
		 if((numeroB > numeroA && numeroB < numeroC) || (numeroB > numeroC && numeroB < numeroA)){
	    printf("El numero intermedio es %d", numeroB);
	    }
	    else{
	    	if((numeroC > numeroA && numeroC < numeroB) || (numeroC > numeroB && numeroC < numeroA)){
	    			printf("El numero intermedio es: %d", numeroC);
	    		}else{
	    			printf("No hay numero intermedio");
	    		}
	    	}
	    }

	return EXIT_SUCCESS;
}
