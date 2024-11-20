#include <stdio.h>
#include <math.h>

int main(){
    float s, l, p;
    printf("ingrese el valor de la superficie: ");
    scanf("%f",&s);
    l=sqrt(s);
    p=l*4;
    printf("el valor del perimetro es de: %f", p);

}