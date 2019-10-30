#include <stdio.h>
#include <stdlib.h>
//Declarando una función previa para switch
int valor (char n){
	//Declarando variable de el valor que regresará la función
	int z;
	switch (n){
		case 'J':
		case 'Q':
		case 'K':
		z=10;
		break;
		case 'A':
		z=11;
		break;
	}
	return z;
}
//Función principal
int main(int argc, char*argv[]){
	//Declarando variables
	int imprimir;
	char coi;
	//Generando estructura de repetición
	for (int i=1; i<argc; i++){
		//Convirtiendo argumentos
		coi=argv[i][0]=='J'||argv[i][0]=='Q'||argv[i][0]=='K'||argv[i][0]=='A';
		//Generando una respuesta booleana
		if (coi==1){
			imprimir=valor(argv[i][0]);
		}
		else {
			imprimir=atoi(argv[i]);
		}
		printf("%i\n", imprimir);
	}
	return 0;
}

