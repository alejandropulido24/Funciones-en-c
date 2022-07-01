//Escribir un programa que reciba una serie de cadenas de caracteres, concatena y da la vuelta a la cadena resultante.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

void con (char cad1 [30], char cad2 [30], char cadena[60]);
void vuelta (char cf[40], char cd[40]);
	
	char string1[30];
	char string2[30];
	char string3[60];
	char string4[60];
	printf("ingrese una cadena: ");
	scanf("%s", string1);
	printf("ingrese otra cadena: ");
	scanf("%s", string2);
	con(string1, string2, string3);
	vuelta(string3, string4);
	printf("\nla concatenacion es: %s", string3);
	printf("\nla cadena invertida es: %s ", string4);
}

	void con (char cad1 [30], char cad2 [30], char cadena[60]){
	strcpy (cadena, cad1);
	strcat (cadena, cad2);
}

void vuelta (char cf[40], char cd[40]){
	int longitud,i,j;
	longitud=strlen(cf);
	j=longitud-1;
	for (i=0; i<longitud; i++)
	{
		cd[i]=cf[j];
		j--;
	}
	cd[longitud]='\0';
}
