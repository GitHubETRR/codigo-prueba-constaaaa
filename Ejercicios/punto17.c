#include <stdio.h>
#include <math.h>

int main(){
    int h1, m1, s1, h2, m2, s2, h3, m3, s3;
    printf("ingrese el valor del PRIMER tiempo\n");
    printf("horas:\n");
    scanf("%d",&h1);
    printf("minutos:\n");
    scanf("%d",&m1);
    printf("segundos:\n");
    scanf("%d",&s1);
    printf("ingrese el valor del SEGUNDO tiempo\n");
    printf("horas:\n");
    scanf("%d",&h2);
    printf("minutos:\n");
    scanf("%d",&m2);
    printf("segundos:\n");
    scanf("%d",&s2);
    if (s1<60 && m1<60 && s2<60 && m2<60){
        s3=s1+s2;
        m3=m1+m2+s3/60;
        s3%=60;
        h3=h1+h2+m3/60;
        m3%=60;
        printf("la suma de los tiempos es de %d:%d:%d", h3, m3, s3);
    }else{
        printf("error al colocar los tiempos");
        return 0;
    }
    }