//Escribir una función que sume dos números. Implemente un programa que la utilice.

#include <stdio.h>
	
float suma (float a, float b);
	
int main(){
	
	float n1,n2;
	
	printf("ingrese un numero: ");
	
	scanf("%f", &n1);
	
	printf("ingrese otro numero: ");
	
	scanf("%f", &n2);
	
	printf("la suma es %f", suma(n1,n2));
	
	return 0;
}

float suma (float a, float b){

    return (a+b);   
}
