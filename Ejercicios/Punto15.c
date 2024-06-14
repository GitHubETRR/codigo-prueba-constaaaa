#include <stdio.h>

int main(){
    float a, b, p, s;
    printf("ingrese el valor del lado a: ");
    scanf("%f",&a);
    printf("ingrese el valor del lade b: ");
    scanf("%f",&b);
    p=a+a+b+b;
    s=a*b;
    printf("el valor del perimetro es de: %f\nel valor de la superficie es de: %f",p,s);
}