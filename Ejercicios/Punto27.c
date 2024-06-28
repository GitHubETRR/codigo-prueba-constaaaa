#include <stdio.h>

int main(){
    int n, c100, c10, c1;
    printf("Ingrese un numero de tres cifras: ");
    scanf("%d",&n);
    if (n>99)
    {
        c100= n/100;
        c10= (n%100)/10;
        c1= n % 10;
        printf("El numero separado es: %d - %d - %d", c100, c10, c1);
    }else{
        return 0;
    }
}