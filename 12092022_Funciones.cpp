#include <stdio.h>
#include <stdlib.h>
int sumar(int x, int y, int suma);
int main (){
	int a,b,suma=0;
    sumar(a,b,suma);
			
	return 0;
}
int sumar(int x, int y, int suma){
	

	printf ("ingrese 1 numero\n");
	scanf ("%d",&x);
	printf ("ingrese 2 numero\n");
	scanf ("%d",&y);
	suma=x+y;
	printf ("la suma es: %d",suma);
	return suma;
}
