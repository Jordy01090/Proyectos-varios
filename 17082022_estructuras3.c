#include<stdio.h>
#include<stdlib.h>
#define N 100
typedef struct{
      char casa[12];
      char oficina[12];
      char movil[12];
 }telefonos;
typedef struct{
      char nombre[30];
      int edad;
      float peso;
      char sexo;
      telefonos tlf;
}persona;

int main(){
    persona per[N],aux;
   
    int i=0,n=0,mayor=0;
    do{
        printf("Cuantas personas desea registrar:  ");
        scanf("%d",&n);fflush(stdin);
    }while(n<=0||n>N);
    
    for(i=0;i<n;i++){
        printf("Ingrese su nombre:");
        gets(per[i].nombre);fflush(stdin);//se usa gets para identificar tambien los espacios
        printf("Ingrese su edad:");
        scanf("%i",&per[i].edad);fflush(stdin);
        printf("Ingrese su peso:");
        scanf("%f",&per[i].peso);fflush(stdin);
        printf("Ingrese su genero:");
        scanf("%c",&per[i].sexo);fflush(stdin);
        printf("Ingrese telefono de casa:");
        gets(per[i].tlf.casa);fflush(stdin);
        printf("Ingrese telefono de oficina:");
        gets(per[i].tlf.oficina);fflush(stdin);
        printf("Ingrese telefono de movil:");
        gets(per[i].tlf.movil);fflush(stdin);
    }
    printf("\nLos datos registrados de %d personas son: ",n);
    for(i=0;i<n;i++){
    printf("\nPersona Nro: %i",(i+1));
    printf("\nNombre:%s",per[i].nombre);
    printf("\nEdad:%d",per[i].edad);
    printf("\nPeso:%f",per[i].peso);
    printf("\nGenero:%c",per[i].sexo);
    printf("\nTelefono de casa:%s",per[i].tlf.casa);
    printf("\nTelefono de oficina:%s",per[i].tlf.oficina);
    printf("\nTelefono de movil:%s",per[i].tlf.movil);
    }
    mayor=per[0].edad;
    aux=per[0];
    for(i=1;i<n;i++){
        if(per[i].edad>mayor){
          mayor=per[i].edad;
          aux=per[i];
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
