#include<stdio.h>

int main(){
	//declaración de variables
	int num1;
	int num2;
	int absoluto;

	//entrada de variable num
	printf("Asigna un valor\n");
	scanf("%i", &num1);
	printf("Asigna otro valor\n");
	scanf("%i", &num2);

	//condicional para obtener el valor absoluto de la diferencia de dos números
    absoluto = (num1-num2)>0?(num1-num2):-(num1-num2);
	printf ("La diferencia es %i", absoluto);
	return 0;
}