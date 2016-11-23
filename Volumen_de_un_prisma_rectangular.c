/*Programa que calcula el volumen de un prisma rectangular mediante datos
proporcionados por el usuario.
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

int main(){
    float a, l, h, result;

    puts("\n\t\t VOLUMEN DE UN PRISMA RECTANGULAR");
    printf("\n Ingresa el largo de tu prima: \n");
    scanf("%f", &l);
    printf("\n Ingresa el ancho de tu prima: \n");
    scanf("%f", &a);
    printf("\n Ingresa la altura de tu prima: \n");
    scanf("%f", &h);
    //radio=radio*radio;
    result=l*(a*h);

    printf("\n El volumen del prisma es: %.2f\n",result);

    getch();
    //system("pause");
}
