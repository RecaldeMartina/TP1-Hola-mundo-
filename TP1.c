#include <stdio.h>
#include <stdlib.h>

int main (int arch, char *argv[]){
    char nombre [20];
    int edad;

    printf ("%s", "Ingrese su nombre: ");
    scanf ("%s", nombre);
    printf ("%s", "Ingrese su edad: ");
    scanf ("%d", &edad);
    printf ("Le deseamos un excelente dia %s su edad es %d \n", nombre, edad);
    
    system ("pause");
    return 0;
}