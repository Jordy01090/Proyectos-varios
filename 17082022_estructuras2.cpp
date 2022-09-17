#include<stdio.h>
#include<stdlib.h>
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
    persona per1,per2;
    printf("Ingrese su nombre:");
    gets(per1.nombre);fflush(stdin);
    printf("Ingrese su edad:  ");
    scanf("%i",&per1.edad);fflush(stdin);
    printf("Ingrese su peso:  ");
    scanf("%f",&per1.peso);fflush(stdin);
    printf("Ingrese su genero:  ");
    scanf("%c",&per1.sexo);fflush(stdin);
    printf("Ingrese telefono de casa:  ");
    gets(per1.tlf.casa);
    printf("Ingrese telefono de oficina:  ");
    gets(per1.tlf.oficina);
    printf("Ingrese telefono de movil:  ");
    gets(per1.tlf.movil);
    
    printf("Ingrese su nombre:  ");
    gets(per2.nombre);fflush(stdin);
    printf("Ingrese su edad:  ");
    scanf("%i",&per2.edad);fflush(stdin);
    printf("Ingrese su peso:  ");
    scanf("%f",&per2.peso);fflush(stdin);
    printf("Ingrese su genero:  ");
    scanf("%c",&per2.sexo);fflush(stdin);
    printf("Ingrese telefono de casa:  ");
    gets(per2.tlf.casa);
    printf("Ingrese telefono de oficina:  ");
    gets(per2.tlf.oficina);
    printf("Ingrese telefono de movil:  ");
    gets(per2.tlf.movil);
    
    if(per1.edad>per2.edad){
         printf("El mayor es %s \n",per1.nombre);
    }else if(per1.edad<per2.edad){
	     printf("El mayor es %s \n",per2.nombre);
    }else{
              
         printf("Tienen la misma edad. \n");
    }
	system("pause");
    return 0;
}

