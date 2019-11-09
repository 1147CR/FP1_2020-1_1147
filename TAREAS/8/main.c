#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//Declarando variables
	float x, y, z;

	//Convirtiendo argumentos, guardando en variable flotante
	x=atof(argv[1]);
	y=atof(argv[2]);

	//Mientras x sea igual a 1 se convierte y a grados C
	if(x!=0){
		z=(y*1.8)+32;
		//Mostrando el resultado
		printf("%.2f\n", z);
		return 0;
	}
	//Si no entonces cuando x valga 0 se convierte y a grados F
	else
		if(x==0){
			z=(y-32)/1.8;
			//Mostrando el resultado
			printf("%.2f\n", z);
			return 0;
		}

	return 0;
}
