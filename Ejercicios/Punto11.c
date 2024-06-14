#include <stdio.h>

int main(){
    float cm;
    int ps, pl;
    printf("Ingrese el valor en centimetros: ");
    scanf("%f",&cm);
    ps=cm/30.48;
    pl=cm/2.54;
    printf("Su valor en pies: %d\nSu valor en pulgadas: %d", ps, pl);
}