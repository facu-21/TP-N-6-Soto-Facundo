#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float alm(){
	char a[20];
	int i,j,n;
	int dif='a'-'A';
	float p,pg;
	p=0;
	pg=0;
	for(i=1;i<=3;i++) {
		for(j=1;j<=6;j++){
			if (j==1) {
				printf("Alumno numero %d\n",i);
				printf("Ingrese su apellido: ");
				scanf("%s",&a);
				if (a[0]>='a' && a[0]<='z'){
					a[0]=a[0]-dif;
				}
			}
			else {
				printf("Ingrese nota numero %d: ",j-1);
				scanf("%d",&n);
				p=p+n;
			}
		}
		p=p/5;
		printf("El promedio de %s es de %.2f\n",a,p);
		pg=pg+p;
		p=0;
		n=0;
	}
	return pg;
}

int main() {
	float pg=0;
	pg=alm();
	pg=pg/3;
	printf("El promedio del curso es de %.2f\n",pg);
	system("pause");	
	return 0;
}
