#include <stdio.h>
#include <stdlib.h>

void pi(int *v){
	int i,j=0,p[21];
	for(i=1;i<=20;i++){
		if(v[i]%2==0){
			j++;
			p[j]=v[i];
			if(j==1){
				printf("Los numeros pares son: %d ",p[j]);
			}
			else{
				printf("%d ",p[j]);
			}
		}
	}
	if(j==0){
		printf("No hay numeros pares\n");
	}
	printf("\n\n");
	j=0;
	for(i=1;i<=20;i++){
		if(v[i]%2!=0){
			j++;
			p[j]=v[i];
			if(j==1){
				printf("Los numeros impares son: %d ",p[j]);
			}
			else{
				printf("%d ",p[j]);
			}
		}
	}
	if(j==0){
		printf("No hay numeros impares\n");
	}
}

int main() {
	int v[21],i;
	for(i=1;i<=20;i++){
		if(i==1){
			printf("Ingrese un numero: ");
		}
		else{
			printf("Ingrese otro numero: ");
		}
		scanf("%d",&v[i]);
	}
	system("CLS");
	pi(v);
	return 0;
}
