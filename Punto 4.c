#include <stdio.h>
#include <stdlib.h>

void sm(int *v,int *n){
	int i,r1;
	r1=0;
	for(i=1;i<=8;i++){
		if(n[1]==v[i]){
			if(r1==0){
				printf("El primero de los ultimos valores se encuentra entre los iniciales 8\n");
				r1++;
				printf("Posiciones: ");
				printf("%d ",i);
			}
			else{
				r1++;
				printf("%d ",i);
			}
		}
	}
	if(r1!=0){
		printf("\nEl primer numero se repite %d veces\n",r1);
	}
	else{
		printf("El primer numero no se repite en ninguna ocasion\n");
	}
	r1=0;
	for(i=1;i<=8;i++){
		if(n[2]==v[i]){
			if(r1==0){
				printf("El segundo de los ultimos valores se encuentra entre los iniciales 8\n");
				r1++;
				printf("Posiciones: ");
				printf("%d ",i);
			}
			else{
				r1++;
				printf("%d ",i);
			}
		}
	}
	if(r1!=0){
		printf("\nEl segundo numero se repite %d veces\n",r1);
	}
	else{
		printf("El segundo numero no se repite en ninguna ocasion\n");
	}
}

int main() {
	int v[9],n[3],i;
	for(i=1;i<=8;i++){
		printf("Ingrese numero %d: ",i);
		scanf("%d",&v[i]);
	}
	printf("Ingrese otros 2 numeros\n");
	printf("Ingrese numero 1: ");
	scanf("%d",&n[1]);
	printf("Ingrese numero 2: ");
	scanf("%d",&n[2]);
	sm(v,n);
	return 0;
}
