#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//Declarando variables
	double x, y;

	//Convirtiendo argumentos a flotantes
	x= atof(argv[1]);
	y= atof(argv[2]);

	//Haciendo operaciones leyendo variables 
	printf("%.2lf\n", x+y);
	
	printf("%.2lf\n", x-y);
	
	printf("%.2lf\n", x*y);
	
	printf("%.2lf\n", x/y);

	return 0;
}