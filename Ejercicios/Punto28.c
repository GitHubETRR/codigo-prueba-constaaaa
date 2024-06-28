#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2;
    printf("Ingrese el valor a, b y c del polinomio:\n");
    printf("Valor a: ");
    scanf("%f",&a);
    printf("Valor b: ");
    scanf("%f",&b);
    printf("Valor c: ");
    scanf("%f",&c);
    x1=(-b-sqrt(b*b-4*a*c))/(2*a);
    x2=(-b+sqrt(b*b-4*a*c))/(2*a);
    printf("La primera raiz es: %f\n", x1);
    printf("La segunda raiz es: %f", x2);
}