/*Programa que te dice el dia, dependiendo de el numero que entre
se utiliza la funcion x=getchar, siendo "X" una variable entera, todo dentro un switch
Programador: Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main(){

int x;

        puts("\n\t Eleccion de el dia \n ");
        printf("\n Elige la letra para el dia\n\nLunes=L o l, Martes=M o m, Miercoles=I o i, Jueves=J o j, Viernes=V o v, Sabado=S o s, DOmingo=D o d\n\n ");
        x=getchar();        // se usa la funcion getchar y se le asigna el valor a la variable x, funcionando como un scanf

        if(x!='\n'){        //Se evalua la variable x diferenre de un salto de linea, para que no se confunda
                            // al dar un enter

          switch(x){

            case('L'): case('l'):   // se colocan dos casos diferentes para una sola impresion

            puts("\n El dia es #1 LUNES ");
            break;

            case('M'): case('m'):

            puts("\n El dia es #2 MARTES ");
            break;

            case('I'): case('i'):

            puts("\n El dia es #3 MIERCOLES ");
            break;

            case('J'): case('j'):

            puts("\n El dia es #4 JUEVES ");
            break;

            case('V'): case('v'):

            puts("\n El dia es #5 VIERNES ");
            break;

            case('S'): case('s'):

            puts("\n El dia es #6 SABADO ");
            break;

            case('D'): case('d'):

            puts("\n El dia es #7 DOMINGO ");
            break;

            default:
                printf("\n El caracter no es valido");
                break;
                    }
                    }

                    return 0;
                    system("pause");
}
