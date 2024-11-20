#include <stdio.h>

int main(){
    float f, c;
    printf("Ingrese los grafos Celsius:\n");
    scanf("%f",&c);
    f=c*1.8+32;
    printf("En grados Fahrenheit el valor es de %f", f);
}