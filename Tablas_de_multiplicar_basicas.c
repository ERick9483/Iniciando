/*Muestra la trabla de multiplicar de un numero, hasta
el numero que se quiera multiplicar, utilizando dos for.
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int num,limite,j;

    puts("\n\t TABLAS DE MULTIPLICAR \n");

    printf("\n Ingrese el numero del cual quiere su tabla: ");
    scanf("%d",&num);
    printf("\n Ingrese el limite de la tabla: ");
    scanf("%d",&limite);

    for(j=1;j<=limite;j++){
        printf("\n %dx%d= %d",j,num,j*num);
    }
    puts("\n");
    system("pause");
    return 0;
}
