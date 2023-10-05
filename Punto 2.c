#include <stdio.h>
#include <stdlib.h>

int ak(int *v,int m){
	int i,a,d;
	a=1; d=1;
	for(i=1;i<=7;i++){
		printf("Ingrese elemento numero %d: ",i);
		scanf("%d",&v[i]);
		if(i!=1){
			if(v[i]>=v[i-1] && a==1){
				a=1;
			}
			else{
				a=0;
			}
			if(v[i]<=v[i-1] && d==1){
				d=1;
			}
			else{
				d=0;
			}
		}
		if(v[i]>m){
			m=v[i];
		}
	}
	system("CLS");
	if(a==1){
		printf("Los numeros fueron ingresados de forma ascendente\n");
	}
	else{
		if(d==1){
			printf("Los numeros fueron ingresados de forma descendente\n");
		}
		else{
			printf("Los numeros fueron ingresados de forma desordenada\n");
		}
	}
	return m;
}
int main() {
	int v[8],i,m;
	m=0;
	m=ak(v,m);
	for(i=1;i<=7;i++){
		printf("Elemento numero %d: %d\n",i,v[i]);
	}
	printf("Valor del elemento mayor: %d\n",m);
	return 0;
}
