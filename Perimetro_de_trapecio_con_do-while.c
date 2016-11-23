/*Programa que calcula el perimetro o area de un trapecio
utilizando un do-while y un switch para ejecutarlo las veces que necesite el usuario
Programador: Erick Orduño*/

#include<stdio.h>
#include<stdlib.h>

int main (){

    char op;
    float B,b,h,lado;
    puts("\n Programa area/perimetro del trapecio \n");

    do{ //Una vez cumpliendose el while, el programa inicia el ciclo de nuevo desde aqui...
        puts("\n\t MENU\n\n elige la opcion que necesites \n");
        printf("\n a:Area\n p:perimetro\n f:para el final\n");
        scanf("%c",&op);
        if(op=='a' || op=='A'){

            system("cls");
            printf("\n\t Ingrese valor para base mayor, menor y altura (separados por un espacio): ");
            scanf("%f %f %f", &B, &b, &h);
            printf("\n El area es %0.2fcm \n",(B+b)*h/2);
            system("pause");

        }
            else if(op=='p' || op=='P'){

                system("cls");
                printf("\n\t Ingrese valor para base mayor, menor y altura (separados por un espacio): ");
                scanf("%f %f %f", &B, &b, &h);
                printf("\n El perimetro es %0.2fcm \n",(B+b)+h*2);
                system("pause");
            }

            else if(op=='f'|| op=='F'){

                system("cls");  //funciona para limpiar pantalla
                printf("\n\t Fin del Programa");
            }
            fflush(stdin);  // funciona para limpiar el bus y poder leer un caracter despues de un entero
    }
    while(op!='f' && op!='F');
    return 0;
    system("pause");
}

