/*Programa en C que permite almacenar la cantidad de libros prestados durante 10 dias
en una biblioteca. Obtener el promedio de libros prestados durante esos 10 dias
y mostrar en pantalla cuantos dias se prestaron menos y mas libros que el promedio
Erick9483*/
#include<stdio.h>
#include<stdlib.h>

int main (){

    int dias[10], i, dia_de_men_lib=0, dia_de_mas_lib=0, sum_lib=0;
    float prom;

    puts("\n\t Programa para biblioteca, COnteo de libros");

    for(i=0;i<=9;i++){
    printf("\n\n\t Ingrese la cantidad de libros en dia #%i: ",i+1);
    scanf("%i",&dias[i]);

    sum_lib=sum_lib+dias[i];

    while(dias[i]<0){       //verifica cantidad de libros en arreglo

        printf("\n\t ERROR! \n\t Ingrese de nuevo cantidad de Libros en dia#%i:  \t",i+1);
        scanf("%i",&dias[i]);

        sum_lib=sum_lib+dias[i];

            }
        }

        prom=sum_lib/10;

        do{

        dia_de_men_lib=0;
        dia_de_mas_lib=0;


        for(i=0;i<10;i++){      //contador de cal para iniciar comparacion con cant de libros ingresada
            if(dias[i]>prom){
                    dia_de_mas_lib++;
            }
            else{
                dia_de_men_lib++;
            }
        }

        printf("\n\t La suma de todos los libros prestados es: %i",sum_lib);
        printf("\n\t El promedio de estos libros es: %.f",prom);
        printf("\n\t La cantidad de dias que se sacaron mas libros que el promedio son: %i",dia_de_mas_lib);
        printf("\n\t La cantidad de dias que se sacaron menos libros que el promedio son: %i \n\n",dia_de_men_lib);
        printf("\n\n Desea obtener los datos de nuevo? :  1=Si \t");
        scanf("%i",&i);

    }

     while(i==1);

    system("pause");
    return 0;

        }
