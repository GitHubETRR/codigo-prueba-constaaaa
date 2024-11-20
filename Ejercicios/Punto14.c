#include <stdio.h>

int main(){
    float a, b, c;
    printf("Ingrese el valor del primer angulo: ");
    scanf("%f",&a);
    printf("Ahora del segundo angulo: ");
    scanf("%f",&b);
    c=180-a-b;
    printf("El valor de el angulo faltante es de: %f",c);
}