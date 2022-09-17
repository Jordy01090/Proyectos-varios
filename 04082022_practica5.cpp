#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30
int main(){
	int n=0,i=0;
	float x[N],suma=0.0,mayor=0.0,menor=0.0,promedio=0.0;
	do{
		printf("Cuantos numeros desea generar?  ");
		scanf("%i",&n);
	}while (n>N);
	srand(time(NULL));
	for(i=0;i<n;i++){
		x[i]=20+(rand()%801)/10.0f;//801/10+20=80
		suma+=x[i];
	}
	printf("Los %d numeros generados son\n",n);
	for(i=0;i<n;i++){
		printf("%.2f     ",x[i]);
	}
	mayor=x[0];
	for(i=1;i<n;i++){
		if (x[i]>mayor){
			mayor=x[i];
		}
	}
	printf("\nEl numero mayor es  %.2f",mayor);
	menor=x[0];
		for(i=1;i<n;i++){
		if (x[i]<menor){
			menor=x[i];
		}
	}
	printf("\nEl numero menor es %.2f",menor);
	promedio=suma/n;
	printf("\nLos numeros mayores al promedio %.2f son\n",promedio);
	for(i=0;i<n;i++){
		if(x[i]>promedio){
			printf("%.2f    ",x[i]);
		}
	}
	return 0;
}
//presentar los numeros impares menores al promedio
