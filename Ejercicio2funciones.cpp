//Escribir un programa que reciba como argumento un conjunto de números. Calcular la media mediante una función.

#include <stdio.h>

float promedio(float a, float b);
	
int main(){
	
	int i; 	
	float num, lim, limite, acumulador=0;
	
	printf("ingrese la cantidad de numeros: ");
	
	scanf("%f", &lim);
	
	limite=lim;
	
	for (int i=1; i<=limite; i++){
		printf("ingrese un numero: ");
		scanf("%f", &num);
		acumulador=acumulador+num;
	}
	
	printf("la media es: %f", promedio(acumulador,lim));
	
    return 0;
}

float promedio(float a, float b){
	return (a/b);
}

