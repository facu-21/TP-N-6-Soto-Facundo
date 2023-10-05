#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mvi(int em,char *nom,int dm,int mm,int am,float sm){
	printf("El empleado mas antiguo es el numero %d\n",em);
	printf("Su nombre es %s e ingreso el %d / %d / %d y tiene un sueldo de $%.2f\n",nom,dm,mm,am,sm);
}

int main() {
	int i,a,m,d,n,am,mm,dm,em;
	char nom[20];
	char no[20];
	float s,sm;
	n=0;
	
	for(i=1;i<=3;i++){
		printf("Empleado numero %d\n",i);
		printf("Ingrese su nombre: ");
		scanf("%s",&no);
		printf("Ingrese su sueldo: ");
		scanf("%f",&s);
		while(n==0){
			printf("Ingrese su anio de ingreso: ");
			scanf("%d",&a);
			printf("Ingrese su mes de ingreso: ");
			scanf("%d",&m);
			printf("Ingrese su dia de ingreso: ");
			scanf("%d",&d);
			if (!(d<=0 || d>=32 || a<=0 || m<=0 || m>=13)) {
				if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
					if (d<=31) {
						n=1;
					}
				}
				if (m==4 || m==6 || m==9 || m==11) {
					if (d<=30) {
						n=1;
					}
				}
				if (m==2) {
					if (a%4==0) {
						if (d<=29) {
							n=1;
						}
					}
					else {
						if (d<=28) {
							n=1;
						}
					}
				}
			}
			if (n==1) {
				printf("Su fecha es valida\n");
			}
			else {
				printf("Su fecha es invalida\n");
				printf("Ingresela nuevamente\n");
				n=0;
			}
			
		}
		if(i==1){
			am=a;
			mm=m;
			dm=m;
			em=1;
			strcpy(nom,no);
			sm=s;
		}
		else{
			if(a>am){
				em=em;
			}
			else{
				if(a==am){
					if(m>mm){
						em=em;
					}
					else{
						if(m==mm){
							if(d>dm){
								em=em;
							}
							else{
								if(d==dm){
									em=em;
								}
								else{
									em=i;
								}
							}
						}
						else{
							em=i;
						}
					}
				}
				else{
					em=i;
				}
			}
		}
		if(em==2 && i==2){
			am=a;
			mm=m;
			dm=d;
			strcpy(nom,no);
			sm=s;
		}
		if(em==3 && i==3){
			am=a;
			mm=m;
			dm=d;
			strcpy(nom,no);
			sm=s;
		}
		n=0;
	}
	mvi(em,nom,dm,mm,am,sm);
	system("pause");
	
	return 0;
}

