#include <stdio.h>
#define N 30
int main (){
	int n=0,i=0;
	float notas[N];
	float suma=0.0;
	do{
		printf("¿Cuantas notas desea ingresar?  ");
		scanf("%d",&n);
		
	}while(n>N);
	printf("Ingrese las %d notas\n",n);
	for (i=0;i<n;i++){
		printf("Nota %d:  ",(i+1));
		scanf("%f",&notas[i]);
		suma+=notas[i];
	}
	printf("El promedio es %.2f:  ",suma/n);
	printf("Notas a partir de 7\n");
	for(i=0;i<n;i++){
		if(notas[i]<=7){
			printf("        %.2f",notas[i]);
		}
	}
	return 0;
}
