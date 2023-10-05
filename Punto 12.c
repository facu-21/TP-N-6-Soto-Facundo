#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pal(char *t,char *tc){
	if(strcmp(t,tc)==0){
		printf("Es un palíndromo\n");
	}
	else{
		printf("No es un palíndromo\n");
	}
}

int main()
{
	int i,j,l;
	char t[100];
	char tc[100];
	char tempo;
	i=0;
	j=0;
	printf("Ingrese un texto (no más de 100 caracteres): ");
	gets(t);
	l=strlen(t);
	for(i=0;i<=l;i++){
		if(t[i]==' '){
			j=j-1;
		}
		else{
			tc[j]=t[i];
		}
		j=j+1;
	}
	strcpy(t,tc);
	l=strlen(t);
	j=l-1;
	for(i=0;i<l/2;i++){
		tempo=t[i];
		t[i]=t[j];
		t[j]=tempo;
		j=j-1;
	}
	pal(t,tc);
	system("pause");
}
