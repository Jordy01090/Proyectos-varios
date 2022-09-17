#include<stdio.h>
#include<stdlib.h>
struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};// obligatorio el puntoycoma
int main(){
    struct producto pro1,pro2;
    printf("Ingrese el codigo del producto:");
    scanf("%i",&pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro1.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro1.precio);
    printf("Ingrese el codigo del producto:");
    scanf("%i",&pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro2.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro2.precio);
    if(pro1.precio>pro2.precio){
        printf("El producto %s tiene un precio mayor \n",pro1.descripcion);
    }else if(pro2.precio>pro1.precio){
            printf("El producto %s tiene un precio mayor \n",pro2.descripcion);
    }else{
            printf("Tienen igual precio \n");
   }
    system("pause");
    return 0;
}
