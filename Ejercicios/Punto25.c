#include <stdio.h>

int main(){
    int ht, aa, sh, sn, pa;
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d",&ht);
    printf("Ingrese los anios de antiguedad que tiene en la empresa: ");
    scanf("%d",&aa);
    pa=ht*90;
    sh=4500*ht;
    sn=pa+sh;
    printf("Su sueldo neto es de %d", sn);
}