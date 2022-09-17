#include <stdio.h>
#include <stdlib.h>
int main (){
	double v[]={1200,-47,3.14};
	int n= 3;
	double *ptr=v;
	printf ("\n El valor del 1er elemento %.2f",*ptr);
	printf ("\n La direccion del primer elemento es %p",ptr);
	printf ("\n La direccion del primer elemento es %p",v);
    ptr--;
	printf ("\n El valor del 1er elemento %.2f",*ptr);
	printf ("\n La direccion del primer elemento es %p",ptr);
	ptr=ptr+2;
	printf ("\n El valor del 1er elemento %.2f",*ptr);
	printf ("\n La direccion del primer elemento es %p",ptr);
	ptr=ptr+2;
	printf ("\n El valor del 1er elemento %d",*ptr);
	printf ("\n La direccion del primer elemento es %p",ptr);
	ptr=&n;
	printf ("\n El valor del 1er elemento %d",*ptr);
	printf ("\n La direccion del primer elemento es %p",ptr);
	ptr=ptr+3;
	printf ("\n El valor del 1er elemento %d",*ptr);
	printf ("\n La direccion del primer elemento es %p",ptr);
	return 0;
}
