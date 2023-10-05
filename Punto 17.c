#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float ed(int d,int m,int a){
	int l,i;
	float e=0;
	if(a!=2023){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			l=31;
		}
		if(m==4 || m==6 || m==9 || m==11){
			l=30;
		}
		if(m==2){
			if(a%4==0){
				l=29;
			}
			else{
				l=28;
			}
		}
		for(i=d;i<=l;i++){
			e++;
		}
		for(i=m+1;i<=12;i++){
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
				e=e+31;
			}
			if(i==4 || i==6 || i==9 || i==11){
				e=e+30;
			}
			if(i==2){
				if(a%4==0){
					e=e+29;
				}
				else{
					e=e+28;
				}
			}
		}
		if(a+1!=2023){
			for(i=a+1;i<2023;i++){
				if(i%4==0){
					e=e+366;
				}
				else{
					e=e+365;
				}
			}
		}
		e=e+277;
	}
	else{
		if(m==1 || m==3 || m==5 || m==7 || m==8){
			l=31;
		}
		if(m==4 || m==6 || m==9){
			l=30;
		}
		if(m==2){
			l=28;
		}
		if(m==10){
			for(i=d;i<=4;i++){
				e=e+1;
			}
		}
		else{
			for(i=d;i<=l;i++){
				e=e+1;
			}
			for(i=m+1;1<=5;i++){
				if(i==3 || i==5){
					e=e+31;
				}
				if(i==4){
					e=e+30;
				}
				if(i==2){
					e=e+29;
				}
			}
			e=e+29;
		}
	}
	e=e/365;
	return e;
}
	
	int main(){
		int i,a[4],m[4],d[4],n,o,j;
		char n1[30],n2[30],n3[30],no[30];
		float s[4],e[4],t;
		for(i=1;i<=3;i++){
			n=0;
			printf("Empleado numero %d\n",i);
			printf("Ingrese su nombre: ");
			if(i==1){
				scanf("%s",&n1);
			}
			if(i==2){
				scanf("%s",&n2);
			}
			if(i==3){
				scanf("%s",&n3);
			}
			while(n==0){
				printf("Ingrese su anio de nacimiento: ");
				scanf("%d",&a[i]);
				printf("Ingrese su mes de nacimiento: ");
				scanf("%d",&m[i]);
				printf("Ingrese su dia de nacimiento: ");
				scanf("%d",&d[i]);
				if (!(d[i]<=0 || d[i]>=32 || a[i]<=0 || a[i]>2023 || m[i]<=0 || m[i]>=13)) {
					if(a[i]!=2023){
						if (m[i]==1 || m[i]==3 || m[i]==5 || m[i]==7 || m[i]==8 || m[i]==10 || m[i]==12) {
							if (d[i]<=31) {
								n=1;
							}
						}
						if (m[i]==4 || m[i]==6 || m[i]==9 || m[i]==11) {
							if (d[i]<=30) {
								n=1;
							}
						}
						if (m[i]==2) {
							if(a[i]%4==0){
							    if (d[i]<=29) {
									n=1;
								}
							}
							else {
								if (d[i]<=28) {
									n=1;
								}
							}
						}
					}
					else{
						if(m[i]==1 || m[i]==3 || m[i]==5 ||m[i]==7 || m[i]==8){
							if (d[i]<=31) {
								n=1;
							}
						}
						if (m[i]==4 || m[i]==6 || m[i]==9) {
							if (d[i]<=30) {
								n=1;
							}
						}
						if(m[i]==10){
							if(d[i]<=4){
								n=1;
							}
						}
						if(m[i]==2){
							if(d[i]<=28){
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
			printf("Ingrese su sueldo: ");
			scanf("%f",&s[i]);
		}
		printf("¿Desea cambiar alguna fecha? (1-SI 2-NO): ");
		scanf("%d",&o);
		while(o<1 || o>2){
			printf("Respuesta invalida\n");
			printf("Ingrese una respuesta nuevamente: ");
			scanf("%d",&o);
		}
		while(o==1){
			printf("Ingrese el nombre de la persona que desea cambiar su fecha: ");
			scanf("%s",&no);
			while(strcmp(no,n1)!=0 && strcmp(no,n2)!=0 && strcmp(no,n3)!=0){
				printf("Respuesta invalida\n");
				printf("Ingrese otro nombre: ");
				scanf("%s",&no);
			}
			if(strcmp(no,n1)==0){
				i=1;
			}
			if(strcmp(no,n2)==0){
				i=2;
			}
			if(strcmp(no,n3)==0){
				i=3;
			}
			n=0;
			while(n==0){
				printf("Ingrese su anio de nacimiento: ");
				scanf("%d",&a[i]);
				printf("Ingrese su mes de nacimiento: ");
				scanf("%d",&m[i]);
				printf("Ingrese su dia de nacimiento: ");
				scanf("%d",&d[i]);
				if (!(d[i]<=0 || d[i]>=32 || a[i]<=0 || a[i]>2023 || m[i]<=0 || m[i]>=13)) {
					if(a[i]!=2023){
						if (m[i]==1 || m[i]==3 || m[i]==5 || m[i]==7 || m[i]==8 || m[i]==10 || m[i]==12) {
							if (d[i]<=31) {
								n=1;
							}
						}
						if (m[i]==4 || m[i]==6 || m[i]==9 || m[i]==11) {
							if (d[i]<=30) {
								n=1;
							}
						}
						if (m[i]==2) {
							if (a[i]%4==0){
								if (d[i]<=29) {
									n=1;
								}
							}
							else {
								if (d[i]<=28) {
									n=1;
								}
							}
						}
					}
					else{
						if(m[i]==1 || m[i]==3 || m[i]==5 ||m[i]==7 || m[i]==8){
							if (d[i]<=31) {
								n=1;
							}
						}
						if (m[i]==4 || m[i]==6 || m[i]==9) {
							if (d[i]<=30) {
								n=1;
							}
						}
						if(m[i]==10){
							if(d[i]<=4){
								n=1;
							}
						}
						if(m[i]==2){
							if(d[i]<=28){
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
			printf("¿Desea hacer otra modificacion? (1-SI 2-NO): ");
			scanf("%d",&o);
			while(o<1 || o>2){
				printf("Respuesta invalida\n");
				printf("Ingrese una respuesta nuevamente: ");
				scanf("%d",&o);
			}
			if(o==2){
				printf("Modificaciones finalizadas\n");
			}
		}
		for(i=1;i<=3;i++){
			e[i]=ed(d[i],m[i],a[i]);
		}
		for(i=1;i<=3;i++){
			for(j=1;j<=3;j++){
				if(e[j]>e[i]){
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
		for(i=1;i<=3;i++){
			if(i==1){
				printf("El empleado mas viejo tiene ");
			}
			if(i==2){
				printf("El segundo empleado mas viejo tiene ");
			}
			if(i==3){
				printf("El tercer empleado mas viejo tiene ");
			}
			printf("%.2f anios\n",e[4-i]-1);
		}
	}
