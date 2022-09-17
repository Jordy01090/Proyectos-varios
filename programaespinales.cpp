#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//#include "espinales.h"


//typedef struct {
//	char movil[12];
//}telefono;

//typedef struct {
//    int dia;
//    int mes;
//    int anio;
//}fecha;

//typedef struct {
//	char cedulacliente[11];
//	char apellidosdelcliente[40];
//	char nombresdelcliente[40];
//	char correo[40];
//	fecha fechanacimiento[9];
//	int edad[3];
//}persona;

//typedef struct{ 
//	int nroFactura;
//	int cliente; 
//	int fechadeventa;
//	int comida;
//	int precio;
//	int totalapagar;
//}Factura;

//typedef struct{ 
//	int nroEntrega;
//	int cliente;
//	char direccion[50];
//	int fechaEntrega;
//	int precioComida;
//	int precioEntrega;
//	int totalapagar;
//}Entrega;


//ComidaRapida: idComida, nombre, precio, porcion, oferta, descuento
typedef struct{
	int idcomida;
	char nombre[15];
	float precio;
	int porcion;
	float descuento; //tasa de descuento 15%, 20%
	float oferta; //calcular precio de oferta, o sea aplicativo el descuento
	int estado; // 1=esta activo   0=no esta activo
}comida;

int registrar(comida *comidas,int n);
void presentar(int i, comida *comidas);
//int buscar(char *nombre,comida *comidas, int i);
int buscar (int idcomida,comida *comidas,int i );
void vercomida(comida x);

int main (){
	char op=' ',resp=' ';
	int n=0,i=0,posicion=0;
	int idcomida;
	char nombre[15];
	comida *comidas=NULL;
	char mensaje[]="\nBienvenidos\nElija una de las siguientes opciones\n[1]Ingresar Comida\n[2]Presentar inventario\n[3]Buscar una comida por ID\n[4]Actualizar datos\n[5]Eliminar\nElija una opcion:	";

//		do{
//		printf("Menu de comidas:  ");     
//		scanf("%d",&n);fflush(stdin);	
//	}while(n<=0);
	
	comidas=(comida *)malloc(n*sizeof(comida));    // arreglo dinamico

	i=0;
	do{
		printf("%s",mensaje);
		scanf("%c",&op);fflush(stdin);
		switch(op){
			case '1': 
				if(i<n){
                        i=registrar(comidas,i);
                      }else{
                        printf("!!Ya no hay comida!!\n"); 
                      }	
			break;
			case '2': presentar(i,comidas);break;
				
			break;
			case'3': printf("Ingrese ID de la comida: ");
					scanf("%d",idcomida); fflush(stdin);
					posicion=buscar(idcomida,comidas,i);
					 if(posicion!=-1){
					 	vercomida(comidas[posicion]);
					 	printf("\nDesea eliminar el pedido? (1-Continuar/2-Cancelar)? ");
					 	scanf("%c",&resp);fflush(stdin);
					 	if(resp=='1'){
					 		comidas[posicion].estado=0;
					 		printf("Pedido %s eliminado",comidas[posicion].idcomida);
						 }
					 }
				
			break;
			
			case'4':	break; //Actualizar
			
			case'5': 	printf("Ingrese comida que desea eliminar: ");
				scanf("%d",&idcomida);  fflush(stdin);
				posicion=buscar(idcomida,comidas,i);
			break;
		}	
					
	}while(op!='0');
		free(comidas);     
		return 0;
	}
	
int registrar(comida *comidas,int i){

    printf("Id comida: ");
    scanf("%d",&comidas[i].idcomida); fflush(stdin);
    printf("Nombre: ");
    scanf("%s",&comidas[i].nombre); fflush(stdin);
    printf("Precio: ");
    scanf("%f",&comidas[i].precio); fflush(stdin);
    printf("Descuento: ");
    scanf("%d",&comidas[i].descuento); fflush(stdin); 
    comidas[i].estado=1;i++;
    return i;
}

void presentar(int n,comida *comida){
	int i=0;
	for(i=0;i<n;i++){
		if(comida[i].estado==1){
			vercomida(comida[i]);
		}
	}
}

int buscar(int idcomida,comida *comidas,int n){
	int i=0,bandera=0;//bandera variable para tener un control
	int posicion=-1;
	for(i=0;i<n&&bandera==0;i++){
		if(idcomida==comidas[i].idcomida){
			posicion=i;
			bandera=1;
		}
	}
	return posicion;	
}


void vercomida(comida x){
	printf("\nId comida: %d",x.idcomida);
	printf("\nnombre: %s",x.nombre);
	printf("\nprecio: f",x.precio);
	printf("\nporcion: %d",x.porcion);
	printf("\ndescuento: %0.15,0.2f",x.descuento); //tasa de descuento 15%, 20%
	printf("\noferta: %f",x.oferta); 	
	if(x.estado==0)
		printf("\nComida entregada");
}
