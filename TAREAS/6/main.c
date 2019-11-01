#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){//Para indicar que los parámetros de entrada son argumentos
	//Declarando avriables
	int x=1;
	int y, z, m;
	//Estructura de repetición
	for(int i=1;i<argc; i++){
		//Convirtiendo argumento a entero
		z=atoi(argv[i]);
		x=x*z;
	}
	//Estructura de repetición
	for(int w=1; w<argc; w++){
		//Convirtiendo argumento a entero
		m=atoi(argv[w]);
		y=x/m;
		printf("%i\n", y);
	}
	return 0;
}
