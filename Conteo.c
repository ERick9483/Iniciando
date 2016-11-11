/*COnteo de numeros pares en una serie de numeros
utilizando un while
Explicacion del segundo comint*/
#include<stdio.h>
#include<stdlib.h>

int main(){

int num,pares=0;

    puts("\n\t COnteo de numeros pares\n");
    printf("\n\t Ingrese numero (fin con cero): ");
    scanf("%d",&num);

    while(num!=0){
        if(num%2==0)
        {
            pares++;
        }
        printf("\n\t Igrese numero (fin con cero): ");
        scanf("%d",&num);

    }
    printf("\n\t Se ingresaron %d pares\n",pares);

    system("pause");
}
