/*Este programa convierte una cantidad de grados centigrados dada por el usuario a
grados fahrenheit
Programador: Erick Orduño*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float grados_centigrados, grados_fahrenheit;
    printf ("\n programa_para_convertir_grados _centigrados_a_fahrenheit\n");
    printf ("\n\t ingrese_grados_centigrados\t");
    scanf ("%f", &grados_centigrados);

    grados_fahrenheit= grados_centigrados*1.8+32;
    printf ("\n\t resultado %0.2f grados \n\n",grados_fahrenheit);
    system ("PAUSE");
    return 0;
}
