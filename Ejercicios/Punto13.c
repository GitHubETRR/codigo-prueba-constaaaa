#include <stdio.h>

int main(){
    float kg, pr, pg;
    printf("ingrese el valor del precio por kilo: ");
    scanf("%f",&pr);
    printf("Ingrese la cantidad de kilos a comprar: ");
    scanf("%f",&kg);
    pg=pr*kg;
    printf("El valor a pagar es de: %f",pg);
}