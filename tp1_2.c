#include <stdio.h>


int Cuadrado(int numero);
void CuadradoPunt(int *numero);
int mostrarVariable(int variable);
void invertir(int *a, int *b);
void orden(int *a, int *b);
void funciones();

int main(){
    int numero = 10;

    printf("Cuadrado: %d \n", Cuadrado(numero));

    CuadradoPunt(&numero);
    printf("Cuadrado Punt %d", numero);

    funciones();
    return 0;
}


int Cuadrado(int numero){
    int resultado = 0;
    resultado = numero * numero;

    return resultado;
}

void CuadradoPunt(int *puntero){
    *puntero = (*puntero) * (*puntero);
}

int mostrarVariable(int variable){
    printf("Direccion de la variable %d", &variable);
    printf("Contenido de la variable %d", variable);
}

void invertir(int *a, int *b){
    int aux = *a;

    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    int aux = *a;

    if(*a > *b){
        *a = *b;
        *b = aux;
    }

}


void funciones(){
    int a = 0;
    int b = 0;

    printf("\nIngrese el valor del primer numero \n");
    scanf("%d", &a);
    printf("Ingrese el valor del segundo numero \n");
    scanf("%d", &b);

    invertir(&a, &b);
    printf("El valor de (a) es: %d \n", a);
    printf("El valor de (b) es: %d \n", b);


    printf("Ingrese el valor del primer numero \n");
    scanf("%d", &a);
    printf("Ingrese el valor del primer numero \n");
    scanf("%d", &b);

    orden(&a, &b);
    printf("El valor de (a) es: %d \n", a);
    printf("El valor de (b) es: %d \n", b);
}












