#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void voc(char *t){
	int a,e,i,o,u,j;
	char l;
	a=0;e=0; i=0; o=0; u=0;
	l=strlen(t);
	for (j=0;j<=l;j++){
		if (t[j]==97 || t[j]==65){
			a++;
		}
		if (t[j]==101 || t[j]==69){
			e++;
		}
		if (t[j]==105 || t[j]==73){
			i++;
		}
		if (t[j]==111 || t[j]==79){
			o++;
		}
		if (t[j]==117 || t[j]==85){
			u++;
		}
	}
	printf("La cantidad de letras 'a' es %d\n",a);
	printf("La cantidad de letras 'e' es %d\n",e);
	printf("La cantidad de letras 'i' es %d\n",i);
	printf("La cantidad de letras 'o' es %d\n",o);
	printf("La cantidad de letras 'u' es %d\n",u);
}
	
	int main() {
		char t[200];
		printf("Ingrese un texto: ");
		gets(t);
		voc(t);
		system("pause");	
		return 0;
	}
	
