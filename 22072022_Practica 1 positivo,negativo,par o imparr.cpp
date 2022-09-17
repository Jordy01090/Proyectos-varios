#include <stdio.h>
int main (){
	int num ;
	printf ("Programa que evalua si un numero es positivo, negativo, par o impar \n");
	printf ("Ingrese el numero  \n");
	scanf ("%i", &num);
	if (num>=0){
		printf ("Es un numero positivo  \n");
	}else if (num<0){
		printf ("Es un numero negativo  \n");
	}
	if (num%2==0){
		printf (" Y es un numero par");
	}else if (num%2!=0){ 
		printf (" Y es un numero impar");
	}
	return 0;
}

