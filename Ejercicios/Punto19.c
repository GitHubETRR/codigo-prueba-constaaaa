#include <stdio.h>
#include <math.h>

int main(){
    float a, b, h;
    printf("Ingrese el valor de los catetos\n");
    printf("Cateto A: ");
    scanf("%f",&a);
    printf("Cateto B: ");
    scanf("%f",&b);
    h=sqrt(a*a+b*b);
    printf("La hipoteusa de este triangulo es: %f", h);
}