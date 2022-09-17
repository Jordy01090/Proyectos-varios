#include <stdio.h>
#include <stdlib.h>
int main (){
	int *n=(int *)malloc(sizeof(int));//asigna un espacio de memoria
	int i=0;
	double *v,*ptr;
	printf ("Cuantos elementos desea registrar:  ");
	scanf ("%d",n);
	v=(double *)malloc((*n)*sizeof(double));//arreglo dinamico
	for (i=0;i<(*n);i++){
		printf ("%i:  ",i+1);
		scanf("%lf",&v[i]);
	}
	for (ptr=v;ptr<v+(*n);ptr++){
		printf ("\n %lf",*ptr);
		printf ("\n %p",ptr);
	}
	free(v);
	free(n);
	return 0;
}
