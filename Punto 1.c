#include <stdio.h>
#include <stdlib.h>

void sw(int *v){
	int j;
	for(j=1;j<=6;j++){
		printf("Elemento numero %d: %d\n",j,v[j]);
	}
}

int main() {
	int v[7],i;
	for(i=1;i<=6;i++){
		printf("Ingrese elemento numero %d: ",i);
		scanf("%d",&v[i]);
	}
	system("CLS");
	sw(v);
	return 0;
}
