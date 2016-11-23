/*Este programa iprime en pantalla una nota donde mencione como se encuentra la temperatura
o el tiempo en base a un numero que el usuario ingrese
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main (){

int temp;

puts("\n\tTermometro");
printf("\tIngresa la temperatura: ");
scanf("%d",&temp);

if (temp>=-15 && temp<13){
    puts("\nHay un clima Frio");
    }
    else if(temp>=13 && temp<25){
    puts("\nHay un clima templado");
    }
        else if(temp>=25 && temp<45){
        puts("\nHay un clima Calido");
        }
            else{
            puts("\nLa temperatura no es valida \n");
            }
            system("pause");
}
