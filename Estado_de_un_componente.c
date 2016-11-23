/*Se verifica por medio de un switch el estado de un componente
tambien se utiliza un while para hacer el ciclo
Programador: Erick Orduño*/

#include<stdio.h>
#include<stdlib.h>

int main(){

char estado_componente;
int repetir;

    do{
        system("cls");
        puts("\n Programa linea de Produccion\n");
        printf("\n Ingrese codigo de componente\n e:Espacial\n m:Militar\n c:Comercial\n j:Juguete\n\t\t: ");
        fflush(stdin);
        scanf("%c",&estado_componente);

        switch(estado_componente){

    case ('e'): case ('E'): //Se anidan dos casos
        puts("\n\t Ha ingresado un componente grado espacial al stock\n ");
        break;

        case ('m'): case ('M'): //Se anidan dos casos
        puts("\n\t Ha ingresado un componente grado militar al stock\n ");
        break;

        case ('c'): case ('C'): //Se anidan dos casos
        puts("\n\t Ha ingresado un componente grado comercial al stock\n ");
        break;

        case ('j'): case ('J'): //Se anidan dos casos
        puts("\n\t Ha ingresado un componente grado juguete al stock\n ");
        break;

        default:
            puts("\n Codigo no admitido\n");
            break;
        }
        printf("\n Desea registrar otro elemento? Presione 1 si asi lo desea: ");
        scanf("%d",&repetir);
    }
    while(repetir==1);
    getch();
    return 0;

}
