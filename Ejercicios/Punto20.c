#include <stdio.h>

int main(){
    int s, sres, m, h;
    printf("Ingrese la cantidad de segundos:\n");
    scanf("%d",&s);
    if (s<=86400){
        h=s/3600;
        m=(s%3600)/60;
        sres=s%60;
        printf("El tiempo en horas, minutos y segundos es %d:%d:%d", h, m, sres);
    }else{
        printf("Ingrese una cantidad de segundos menor o igual a 86400");
        return(0);
    }
    
}