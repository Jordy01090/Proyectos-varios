//Programa para repartir pizzas, indicar el numero de personas y el numero de pizzas encargadas, retornar el numero de trozos por personas y cuantos sobran
//las pizzas se parten en 8 porciones
/*
ANALISIS
Entradas:n de personas: x
         n de pizzas: y
Salidas: trozos:t
         sobran:s
proceso:
x	y	z	t	s
2	1	8%2	4	0
3	2	16%3	5	1
5	2	16%5	3	1
		z=y*8		
		t=z/x		
		s=z%x		
*/
#include <stdio.h>
int main(){
	int x, y,z=0,t=0,s=0;
    printf ("Programa para repartir pizzas calcula el numero de trozos y los trozos que sobran \n");
	printf ("Ingrese el numero de personas que van a comer la pizza\n   ");
	scanf ("%i", &x);
	printf ("Ingrese numero de pizzas que va a encargar\n  ");
	scanf ("%i", &y);
	z = y * 8;
	if (z<x){
		printf ("los trozos no son suficientes para tantas personas \n");
	}else{
	    t = z / x;
     	s = z % x;

    	printf (" los trozos alcanzan a %i por persona  \n", t);
	    printf ("y esto es lo que sobra %i", s);
	}	

	return 0;
}
