/*Este programa te da el area de un circulo al ingresar el radio del mismo circulo
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>
//#include<math.h>      // Esta libreria es para hacer potencias u operacions matematicas grandes

int main(){
    float pi=3.14, radio, result;

    puts("\n\t\t AREA DEL CIRCULO");
    printf("\n Ingresa el radio en cm del circulo: \n");
    scanf("%f", &radio);
    //radio=radio*radio;
    result=pi*(radio*radio);

    printf("\n El area de tu circulo es: %.2f\n",result);

    getch();    // utilizamos en este caso getch en ves de system pause
    //system("pause");
}
