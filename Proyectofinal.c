/*PROYECTO SISTEMA DE ATENCION A PASAJEROS
C: Registrar
R: Presentar Todos, Buscar X un campo que NO se repite, Buscar x campos que se repite
U: Actualizar
D: Eliminar
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{//Avila Herrera Julio Jordy
		int dia;
		int mes;
		int anio;
}fecha;
typedef struct{//Avila Herrera Julio Jordy
 	    int idpasajero;
		char cedula[11];
 		char nombres[30];
        char apellidos[30];
        char residencia[30];
        fecha fechaNac;
		int edad; 
		char descuento;// S , si tiene descuento N no tiene descuento
        int estado;
}pasajero;
int ingresar(pasajero *,int i);
void mostrar(int i,pasajero *clientes);
int main(){
	char op=' ';
	int n=0,i=0;
	pasajero *clientes=NULL;
	char mensaje[]="Pasajeros\n[1] Registrar\n[2] Presentar\n[3] Buscar por cedula\n[4] Buscar por nombre y edad\n[5] Actualizar\n[6] Eliminar\n[0] Salir\nElija su opcion: ";
	do{
	    printf("Cuantos boletos de viaje desea?");
	    scanf ("%d",&n);fflush(stdin);
	}while(n<=0);

	clientes=(pasajero*)malloc(n*sizeof (pasajero));//arreglo dinamico
	i=0;
	do{
		printf("%s",mensaje);
		scanf("%c",&op);fflush(stdin);
		switch(op){
		 	case '1': if(i<n){
			           i=ingresar(clientes,i);
			          }else{
			          	printf("Ya no hay boletos\n");fflush(stdin);
					  }
			break;
		 	case '2':  mostrar(i,clientes);     break;
			case '3':       break;
			case '4':       break;
			case '5':       break;
			case '6': 	    break;
		 }
	}while(op!='0');
	free(clientes);
    return 0;
}
int ingresar(pasajero *pasajero,int i){
	printf("Cedula:  ");
	scanf("%s",&pasajero[i].cedula);fflush(stdin);
	printf("Nombre:  ");
	scanf("%s",&pasajero[i].nombres);fflush(stdin);
	printf("Apellido:  ");
	scanf("%s",&pasajero[i].apellidos);fflush(stdin);
	printf("Edad:    ");
	scanf("%i",&pasajero[i].edad);fflush(stdin);
    printf("Residencia: ");
	scanf("%s",&pasajero[i].residencia);fflush(stdin);
	printf ("Fecha Nacimiento\nDia:  ");
    scanf ("%i",&pasajero[i].fechaNac.dia);fflush(stdin);
	printf("Mes:  ");
	scanf("%i",&pasajero[i].fechaNac.mes);fflush(stdin);
	printf("Anio: ");
	scanf("%i",&pasajero[i].fechaNac.anio);fflush(stdin);
	pasajero[i].estado=1;
	i++;
	return i;
}
void mostrar(int n,pasajero *clientes){
	int i=0;
	for(i=0;i<n;i++){
	
    printf("\nCedula: %s",clientes[i].cedula);
	printf("\nNombres: %s",clientes[i].nombres);
	printf("\nApellidos: %s",clientes[i].apellidos);
	printf("\Edad: %d",&clientes[i].edad);
	printf("\nResidencia: %s",clientes[i].residencia);
	printf("\nFecha de Nacimiento:%i/%i/%i",clientes[i].fechaNac.dia,clientes[i].fechaNac.mes,clientes[i].fechaNac.anio);
	
}
//	if(x.estado==0)
//	printf("\npasajero dado de baja.");	
}
 
