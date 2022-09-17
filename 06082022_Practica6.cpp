//"Crear un programa que,al recibir como datos dos números enteros,calcule la suma,resta,y multiplicación de dichos números.
#include<stdio.h>
#define N 30
int main(){
    int n,suma,resta,multiplicacion,i;
    float n1,n2,division,num[N];
    do{
    	printf ("ingrese el n%cmero de cantidad\n",163);
    	scanf ("%i",&n);
	}while(n>N);
    
    for (i=0;i<n;i++){
    	printf("N%cmero %d:  ",163,(i+1));
		scanf("%f",&num[i]);
		suma+=num[i];
		
	}
    printf("La suma es:%i\n",suma);
    printf("La resta es:%i\n",resta);
    printf("La multiplicaci%cn es:%i\n",162,multiplicacion);
    printf("La  division es:%.2f\n", division);
    return 0;

}
