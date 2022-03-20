#include <stdio.h>

int main(){
    printf("Hola Mundo");
    
    int edad, *P_edad;
    edad = 19;

    P_edad = &edad;

    //item f
    printf("Contenido del puntero %d", P_edad);
    
    //item g
    printf("Direccion de memoria almacenada por el puntero %d", P_edad);

    //item h
    printf("Direccion de memoria de la variable %d", &edad);

    //item i
    printf("La direccion de memoria del puntero %d", &P_edad);

    //item j
    printf("El tamaño de memoria usando sizeof() %d", sizeof(edad));
}