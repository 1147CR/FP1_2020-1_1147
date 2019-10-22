#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){
	
	//Declarando variables y asignando valor
	double x=0;

	//Construyendo la estructura de repetición con for y convirtiendo argumentos a flotantes
	for(int i=1; i<argc; i++){
		double y=atof(argv[i]);
		x=y+x;
	}

	//Haciendo la operación para generar promedio
	double promedio=x/(argc-1);
	printf("%.2lf\n", promedio);

	return 0;
}
