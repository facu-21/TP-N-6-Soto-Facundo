#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rvs(char *cadena){
	int i,j;
	char temporal,longitud;
	longitud=strlen(cadena);
	j=longitud-1;
	for (i=0; i<longitud/2; i++)
	{
		temporal=cadena[i];
		cadena[i]=cadena[j];
		cadena[j]=temporal;
		j--;
	}
	printf("Su cadena al reves es: %s\n", cadena);
}

int main(){
	char cadena[100];
	system("cls");
	printf("Introduce un texto (menos de 100 caracteres): ");
	gets(cadena);
	rvs(cadena);
	system("pause");
}
