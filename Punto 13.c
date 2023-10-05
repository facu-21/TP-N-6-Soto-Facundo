#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inv(char *t){
	int i=0, difa='a'-'A',difb='A'-'a';
	while (t[i]){
		if (t[i]>='a' && t[i]<='z')
			
			t[i]=t[i]-difa;
		else
			if (t[i]>='A' && t[i]<='Z')
				t[i]=t[i]-difb;
		
		i++;
	}
	printf("Su texto invertido es: %s\n",t);
}

int main (){
	char t[50];
	printf("Ingrese su texto: ");
	gets(t);
	inv(t);
	system("pause");
}
