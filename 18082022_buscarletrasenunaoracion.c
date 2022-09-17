#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (){
	char oracion[100];
	char iniciales[]={'A','E','I','O','U','\0'};
	int i=0,j=0,p=1,k=strlen(iniciales);
	int c[k];//para contar las veces que se encuentran las vocales
	//int contar[]={0,0,0,0,0,}
	for(i=0;i<strlen(iniciales);i++){
		c[i]=0;
	}
	printf("\nIngrese una oracion:  ");
	gets(oracion);//"hola que tal"
	for(i=0;i<strlen(oracion);i++){
		j=0;
		while(iniciales[j]!='\0'){
			if((toupper(oracion[i]))==iniciales[j]){
				p++;
				c[j]++;
			}
			j++;
		}
	}
	if(p>0){
		printf("Si existen sus iniciales, hay %d coincidencias.\n",p);
	}
	for(i=0;i<strlen(iniciales);i++){
		printf("%c   ",iniciales[i]);
	}
	printf("\n");
	for(i=0;i<strlen(iniciales);i++){
		printf("%i   ",c[i]);
	}
	return 0;
}
