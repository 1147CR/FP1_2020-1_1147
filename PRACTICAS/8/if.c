#include<stdio.h>

int main(){
	//declaración de variables
	int num;

	//entrada de variable num
	printf("Dame un numero");
	scanf("%i", &num);

	//condicional para saber si es par o impar
	if(num%2==0)
		printf("Par");
	else
		printf("Non");

	return 0;
}
