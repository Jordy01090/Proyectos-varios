#include <stdio.h>
#include <stdlib.h>
#define N 100

	typedef struct{
		int dia;
		int mes;
		int anio;
	}fecha;
	typedef struct{
		char cedula[11];
		char nombre[30];
		char apellidos[30];
		char LugardeNac[100];
		char Residencia[100];
		int edad;
		int estado;
		char sexo;
		fecha fechaNac;
	}cliente;
int main (){
	int main(){
    cliente cli[N],aux;
   
    int i=0,n=0,mayor=0, descuento;
    do{
        printf("Cuantas personas desea registrar:  ");
        scanf("%d",&n);fflush(stdin);
    }while(n<=0||n>N);
    
    for(i=0;i<n;i++){
        printf("Ingrese su nombre:");
        gets(cli[i].nombre);fflush(stdin);//se usa gets para identificar tambien los espacios
        printf("Ingrese sus apellidos:");
		gets(cli[i].apellidos);fflush(stdin);
		printf("Ingrese su edad:");
        scanf("%i",&cli[i].edad);fflush(stdin);
        printf("Ingrese su numero de cedula:");
        scanf("%c",&cli[i].cedula);fflush(stdin);
        printf("Ingrese su genero:");
        scanf("%c",&cli[i].sexo);fflush(stdin);
        printf("Ingrese lugar de nacimiento:");
        gets(cli[i].LugardeNac);fflush(stdin);
        printf("Ingrese dia de nacimiento:");
        gets(cli[i].fechaNac.dia);fflush(stdin);
        printf("Ingrese mes de nacimiento:");
        gets(cli[i].fechaNac.mes);fflush(stdin);
        printf("Ingrese anio de nacimiento:");
        gets(cli[i].fechaNac.anio);fflush(stdin);
        printf("Ingrese su residencia:");
        gets(cli[i].Residencia);fflush(stdin);
        
    }
    printf("\nLos datos registrados de %d personas son: ",n);
    for(i=0;i<n;i++){
    printf("\nPersona Nro: %i",(i+1));
    printf("\nNombre:%s",cli[i].nombre);
    printf("\nApellidos:%s",cli[i].apellidos);
    printf("\nEdad:%d",cli[i].edad);
    printf("\nCedula:%c",cli[i].cedula);
    printf("\nGenero:%c",cli[i].sexo);
    printf("\nlugar de nacimiento:%s",cli[i].LugardeNac);
    printf("\nResidencia:%s",cli[i].Residencia);
    printf("\nDia de nacimiento:%s",cli[i].fechaNac.dia);
    printf("\nMes de nacimiento:%s",cli[i].fechaNac.mes);
    printf("\nAnio de nacimiento:%s",cli[i].fechaNac.anio); 

    }
    mayor=per[0].edad;
    aux=per[0];
    
    for(i=1;i<n;i++){
        if(cli[i].edad>65){
          mayor=per[i].edad;
          aux=per[i];
          descuento=mayor
        }
    }
printf("\nLa persona mayor es:");
printf("\nNombre:%s",aux.nombre);
printf("\nEdad:%d",aux.edad);
printf("\nPeso:%f",aux.peso);
printf("\nGenero:%c",aux.sexo);
printf("\nTelefono de casa:%s",aux.tlf.casa);
printf("\nTelefono de oficina:%s",aux.tlf.oficina);
printf("\nTelefono de movil:%s \n",aux.tlf.movil);
system("pause");
return 0;
}
	
	return 0;
}

