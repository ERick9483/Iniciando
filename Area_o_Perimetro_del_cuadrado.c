/*Ejemplo con do-while y switch en programa que calcula
el area/perimetro de un cuadrado, repitiendo la accion, cuantas veces el usuario lo requiera*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int op;
    char repetir;
    float lado,area,perimetro;

    do{

    system("cls");
    puts("\n\t Programa AREA/PERIMETRO del cuadrado\n");
    printf("\n Ingrese\n 1:Perimetro\n 2:Area\n");
    scanf("%d",&op);

    if(op==1){
        system("cls");
        printf("\n Perimetro\n\n Ingrese lado en (cm): ");
        scanf("%f",&lado);

        perimetro=lado*4;
        printf("\n El perimetro es: %.2f",perimetro);
    }

     else if(op==2){
            system("cls");
            printf("\n Area\n\n Ingrese lado en (cm): ");
            scanf("%f",&lado);


            area=lado*lado;
            printf("\n EL area es: %.2f",area);
     }

      else if(op=='\n'){
            puts("\n Ingrese su opcion: ");
      }

       else {
            printf("\n Ese numero no es valido");
       }

    fflush(stdin);
    printf("\n Desea realizar otra opcion: S/N: ");
    scanf("%c",&repetir);
    }

    while(repetir=='s' || repetir=='S');
    getch();
    return 0;

}
