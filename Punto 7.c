#include <stdio.h>
#include <stdlib.h>

int tm(int *v,int p1,int p3){
	int i,c2,p2;
	c2=p2*(-1)*(-1); p2=0;
	for(i=1;i<=10;i++){
		if(i!=p1 && i!=p3){
			if(v[i]<c2){
				c2=v[i];
				p2=i;
			}
		}
	}
	return p2;
}

int main() {
	int v[11],i,p1,p2,p3,c1,c3;
	float t=0;
	c3=c3*(-1);
	for(i=1;i<=10;i++){
		printf("Ingrese tiempo en segundos del corredor numero %d: ",i);
		scanf("%d",&v[i]);
		if(v[i]<c1){
			p1=i;
			c1=v[i];
		}
		if(v[i]>c3){
			p3=i;
			c3=v[i];
		}
		t=t+v[i];
	}
	t=t/10;
	p2=tm(v,p1,p3);
	printf("El corredor en el primer puesto es el numero %d\n",p1);
	printf("El corredor en el segundo puesto es el numero %d\n",p2);
	printf("El corredor en el ultimo puesto es el numero %d\n",p3);
	printf("El tiempo promedio en el que se completo la carrera es de %.2f segundos\n",t);
	return 0;
}
