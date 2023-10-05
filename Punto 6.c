#include <stdio.h>
#include <stdlib.h>

void mm(int *v,int ma,int me){
	int i,ca=0,ce=0;
	for(i=1;i<=10;i++){
		if(v[i]==ma){
			ca++;
		}
		if(v[i]==me){
			ce++;
		}
	}
	if(ca==1){
		printf("El numero mayor solo fue ingresado una vez\n");
	}
	else{
		printf("El numero mayor fue ingresado %d veces\n",ca);
	}
	if(ce==1){
		printf("El numero menor solo fue ingresado una vez\n");
	}
	else{
		printf("El numero menor fue ingresado %d veces\n",ce);
	}
}
int main() {
	int v[11],i,ma,me;
	ma=ma*(-1); me=ma*(-1);
	for(i=1;i<=10;i++){
		if(i==1){
			printf("Ingrese un numero: ");
		}
		else{
			printf("Ingrese otro numero: ");
		}
		scanf("%d",&v[i]);
		if(v[i]>ma){
			ma=v[i];
		}
		if(v[i]<me){
			me=v[i];
		}
	}
	mm(v,ma,me);
	return 0;
}
