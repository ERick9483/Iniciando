/*En este programa calculamos la velocidad angular y lineal de un piunto en una trayectoria
circular, con base a los datos que el usuario proporcione
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

int main(){
    float r, d, t,vangular,vlineal;

    puts("\n\t\t VELOCIDAD ANGULAR Y LINEAL DE UN PUNTO A EN UNA TRAYECTORIA CIRCULAR");

    printf("\n Ingresa el desplazamiento angular en radianes: \n");
    scanf("%f", &d);
    printf("\n Ingresa el tiempo en segundos: \n");
    scanf("%f", &t);
    printf("\n Ingresa el radio en metros: \n");
    scanf("%f", &r);

    vangular=d/t;

    vlineal=vangular*r;

    printf("\n ***La velocidad angular es: %.2f rad/s \n",vangular);
    printf("\n ***La velocidad lineal es: %.2f m/s \n",vlineal);

    getch();
    //system("pause");
}
