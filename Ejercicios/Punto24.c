#include <stdio.h>

int main(){
    float r, h, ar, vol;
    printf("Ingrese el valor del radio y de la altura\n");
    printf("Radio: ");
    scanf("%f",&r);
    printf("Altura: ");
    scanf("%f",&h);
    ar=2*3.141592*(r*r)+2*3.14*r*h;
    vol=3.141592*(r*r)*h;
    printf("El area es de %f y el volumen es %f", ar, vol);
}