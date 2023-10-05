#include <stdio.h>
#include <stdlib.h>

int sum(int *v){
	int i,m,t=0;
	m=m*(-1);
	for(i=1;i<=10;i++){
		printf("Ingrese valor de compra numero %d: ",i);
		scanf("%d",&v[i]);
		if(v[i]>m){
			m=v[i];
		}
		t=t+v[i];
	}
	printf("El valor mayor ingresado es %d\n",m);
	return t;
}

int main(){
	int v[11],t;
	t=sum(v);
	printf("El monto total es %d\n",t);
	return 0;
}
