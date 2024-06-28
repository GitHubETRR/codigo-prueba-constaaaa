#include <stdio.h>

int main(){
    int ni, nf;
    printf("ingrese el numero de dos cifras o mas: ");
    scanf("%d",&ni);
    if (ni>9)
    {
        nf=ni%10;
        printf("Su ultima cifra es: %d", nf);
    }
    else{
        return 0;
    }
}