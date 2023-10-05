#include <stdio.h>
#include <stdlib.h>

void ss(int *v){
	int i,j,p=0,m,t,k=0;
	for(i=1;i<=8;i++){
		for(j=1;j<=8;j++){
			if(j>k){
				if(v[j]>=p){
					p=v[j];
					m=j;
				}
			}
		}
		t=v[i];
		v[i]=v[m];
		v[m]=t;
		p=0;
		k++;
	}
	printf("Vector ordenado de forma decreciente: ");
	for(i=1;i<=8;i++){
		if(i==1){
			printf("%d",v[i]);
		}
		else{
			printf(", %d",v[i]);
		}
	}
}

int main() {
	int v[9],i;
	for(i=1;i<=8;i++){
		if(i==1){
			printf("Ingrese un numero: ");
		}
		else{
			printf("Ingrese otro numero: ");
		}
		scanf("%d",&v[i]);
		while(v[i]<=0){
			printf("Valor invalido\n");
			printf("Ingrese otro numero: ");
			scanf("%d",&v[i]);
		}
	}
	printf("Vector original: ");
	for(i=1;i<=8;i++){
		if(i==1){
			printf("%d",v[i]);
		}
		else{
			printf(", %d",v[i]);
		}
	}
	printf("\n");
	ss(v);
	return 0;
}

