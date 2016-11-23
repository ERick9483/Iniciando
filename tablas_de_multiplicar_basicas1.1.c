/*Muestra las trablas de multiplicar de un numero y las anteriores a ese
numero, hasta multiplicarlo por un numero limite que se quiera multiplicar
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int num,limite,j,k;

    puts("\n\t TABLAS DE MULTIPLICAR \n");

    printf("\n Ingrese el numero del cual quiere su tabla: ");
    scanf("%d",&num);
    printf("\n Ingrese el limite de la tabla: ");
    scanf("%d",&limite);

    for(k=1;k<=num;k++){
            puts("\n");
    for(j=1;j<=limite;j++){
        printf("\n %dx%d= %d",j,k,j*k);
    }
    }
    puts("\n");
    system("pause");
    return 0;
}
