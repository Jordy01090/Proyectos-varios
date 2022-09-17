#include <stdio.h>
#include <stdlib.h>
int main(){
	float ptr[]={1200,-47,3.14};
	ptr =(float *)malloc(sizeof(float));
	printf("Ingrese su estatura:  ");
	scanf("%f",&ptr[10]);
	printf("\n El valor de su estatura es:  %f \n",&ptr);
	*ptr=*ptr+0.05;
	printf("El valor de su estatura es:  %f\n",*ptr);
	return 0;
}
