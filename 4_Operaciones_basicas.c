/*Calculadora basica con un switch, esta calculadora solo maneja numeros enteros como entrada
y salida, en division no maneja numeros flotantes ni residuo. tampoco hace ninguna accion de ciclo.
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main (){

int x,y,op;

puts("\n\t\t CALCULADORA BASICA ");
printf("\n Elige la opcion segun el caso: \n\n 1=Suma\n 2=Resta\n 3=Multiplicacion\n 4=DIvision\n\n");
scanf("%d",&op);

if(op!='\n'){

    switch(op){

    case 1:

    printf("\n Teclea el primer numero: ");
    scanf("%d",&x);
    printf("\n Teclea el segundo numero: ");
    scanf("%d",&y);
    printf("\n La suma de los numeros es: %d",x+y);
    break;

    case 2:

    printf("\n Teclea el primer numero: ");
    scanf("%d",&x);
    printf("\n Teclea el segundo numero: ");
    scanf("%d",&y);
    printf("\n La resta de los numeros es: %d",x-y);
    break;

    case 3:

    printf("\n Teclea el primer numero: ");
    scanf("%d",&x);
    printf("\n Teclea el segundo numero: ");
    scanf("%d",&y);
    printf("\n La Multiplicacion de los numeros es: %d",x*y);
    break;

    case 4:

    printf("\n Teclea el primer numero: ");
    scanf("%d",&x);
    printf("\n Teclea el segundo numero: ");
    scanf("%d",&y);
    printf("\n La division de los numeros es: %d",x/y);
    break;

    default:
        printf("\n El numero que ingreso no es valido");
        break;
    }

}
else printf("\n No eligio ninguna opcion");
    return 0;
    system("pause");

}
