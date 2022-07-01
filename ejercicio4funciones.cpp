//Escribir una función que calcule y presente las raíces reales de la ecuación de segundo grado

#include<stdio.h>
#include<math.h>

float esg(float a, float b, float c);

int main(int argc, char** args){
	float a, b, c;
    
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    esg(a, b, c);

    return 0;
    
} 

float esg(float a, float b, float c){
    float disc, x1, x2, xi, xr;

    disc=pow(b, 2)-4*a*c;
    
    if(disc>0){
        x1=((-b+sqrt(disc))/(2.0*a));
        x2=((-b-sqrt(disc))/(2.0*a));
        printf("\n x1= %.2f    x2= %.2f", x1, x2);
    
}
}

