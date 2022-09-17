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
		char cedula[11];//campo unico que no se repite
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
int buscar (char *cedula,pasajero *pasajero,int n);
void verPasajero(pasajero x);
int buscarnombreyedad (char *nombres1,int edad, pasajero *clientes,int n);
int main(){
	char op=' ',resp=' ';
	int n=0,i=0, posicion=0,posicion1=0;
	char cedula[11];
	char nombres[30];
	int edad;
	pasajero *clientes=NULL;
	char mensaje[]="\nPasajeros\n[1] Registrar\n[2] Presentar\n[3] Buscar por cedula\n[4] Buscar por nombre y edad\n[5] Actualizar\n[6] Eliminar\n[0] Salir\nElija su opcion: ";
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
			          	printf("!!Ya no hay boletos!!\n");fflush(stdin);
					  }
			break;
		 	case '2': mostrar(i,clientes);     
			break;
			case '3': printf("Ingrese la cedula a buscar: ");
			          scanf("%s",cedula); fflush(stdin);
			          posicion=buscar(cedula,clientes,i);
			          if(posicion!=-1){
			          	   printf("\nEl pasajero con cedula %s es: ",cedula);
			         	   verPasajero(clientes[posicion]);
					  }else
					    printf("Pasajero con cedula %s no se encuentra.",cedula);
			break;
			case '4':printf("Ingrese el nombre y la edad a buscar: ");
			         printf ("Nombre:");
			         scanf("%s",nombres); fflush(stdin);
                     printf ("Edad:");
			         scanf("%i",edad); fflush(stdin);			         
			         posicion1=buscarnombreyedad (nombres,edad,clientes,i);
			         if(posicion1!=-1){
			          	printf("\nEl pasajero con nombres %s y edad %i es: ",nombres,edad);
			         	verPasajero(clientes[posicion1]);
					 }else
					    printf("Pasajero con nombres %s y edad %i no se encuentra.",nombres,edad);			         
			                break;
			case '5':       break;
			case '6':printf("Ingrese la cedula del pasajero a dar de baja: ");
			         scanf("%s",cedula); fflush(stdin);
			         posicion=buscar(cedula,clientes,i);
			         if(posicion!=-1){
			         	   verPasajero(clientes[posicion]);
			         	   printf("\nQuiere dar de baja la compra del tikect (1-si/2-No)? ");
			         	   scanf("%c",&resp);fflush(stdin);
			         	   if(resp=='1'){
			         	  	    clientes [posicion].estado=0;
			         	  	    printf("pasajero %s eliminado",clientes[posicion].nombres);
						   }
					 } 	    
			break;
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
/*	printf("Edad:    ");
	scanf("%i",&pasajero[i].edad);fflush(stdin);
 */ printf("Residencia: ");
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
	printf("\nFecha de Nacimiento:%i/%i/%i",clientes[i].fechaNac.dia,clientes[i].fechaNac.mes,clientes[i].fechaNac.anio);	
	clientes[i].edad=2022-clientes[i].fechaNac.anio;
	printf("\nEdad: %d",clientes[i].edad);
	printf("\nResidencia: %s\n",clientes[i].residencia);
}

	if(clientes[i].estado=0){
			printf("\npasajero dado de baja.");	
	}

}
int buscar (char *cedula,pasajero *pasajero,int n){
	int i=0,bandera=0;
	int posicion=-1;
	for(i=0;i<n&&bandera==0;i++){
		if(strcmp(cedula,pasajero[i].cedula)==0){
			posicion=i;
			bandera=1;
		}
	}
	return posicion;
} 
void verPasajero(pasajero x){
	        printf("\nCedula: %s",x.cedula);
			printf("\nNombres: %s",x.nombres);
			printf("\nApellidos: %s",x.apellidos);
			printf("\nResidencia: %s",x.residencia);
			printf("\nEdad: %i",x.edad);
			printf("\nFecha de Nacimiento:%i/%i/%i\n",x.fechaNac.dia,x.fechaNac.mes,x.fechaNac.anio);
			x.estado=1;
			if(x.estado==0){
				printf("\npasajero dado de baja.");	
			}			    	    
}
int buscarnombreyedad (char *nombres1,int edad, pasajero *clientes,int n){
	int i=0,bandera=0;
	int posicion1=-1;
	for(i=0;i<n&&bandera==0;i++){
		if(strcmp(nombres1,clientes[i].nombres)&&edad,clientes[i].edad==0){
			posicion1=i;
			bandera=1;
		}
	}
	return posicion1;
} 
/*int buscaredad (int *edad,pasajero *clientes,int n){
	int i=0,bandera=0;
	int posicion2=-1;
	for(i=0;i<n&&bandera==0;i++){
		if(strcmp(edad,pasajero[i].edad)==0){
			posicion2=i;
			bandera=1;
		}
	}
	return posicion2;
} */
