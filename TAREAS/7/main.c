#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//Declarando variables
	int a, b, c=1;

	//Convirtiendo argumentos
	a=atof(argv[1]);
	b=atof(argv[2]);

	for(int i=0; i<b; i++){
		//El resultado se guarda en una variable
		c=c*a;
	}
	//Se muestra el resultado con dos decimales
	printf("%.2d\n", c);
	
	return 0;
}