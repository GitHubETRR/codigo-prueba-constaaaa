#include <stdio.h>

int main()
{
    int f, a, m, d;
    printf("Ingrese el valor de la fecha en formato DDMMAAAA:\n");
    scanf("%d",&f);
    d=f/1000000;
    if (d<=31)
    {
        m=(f/10000)%100;
        if(m<=12)
        {
            a=f%10000;
            printf("La fecha es %d/%d/%d", d, m, a);
        }else{
            return(0);
        }
    }else{
        return(0);
    }
}