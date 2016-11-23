/*Programa que suma uno a uno del 1 al 10 elaborado con un for
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main(){

int num=0,i;

puts("\n\t Este programa suma los numeros del 1 al 10, uno por uno\n");
    for( i=0;i<=10;i++){
    num=num+i;
    }
    printf("\n 1+2+3+4+5+6+7+8+9+10= %d \n\n",num);
    system("pause");
}
