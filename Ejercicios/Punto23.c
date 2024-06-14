#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, s, ar;
    printf("Ingrese el valor de los lados\n");
    printf("Lado a: ");
    scanf("%f",&a);
    printf("Lado b: ");
    scanf("%f",&b);
    printf("Lado c: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("El valor del area de este triangulo es de %f", ar);
}