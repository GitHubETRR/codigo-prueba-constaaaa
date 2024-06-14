#include <stdio.h>

int main(){
   int r;
   printf("Hola Isi!\n");
   printf("Como estas?\n");
   printf("Ingrese 1 para indicar que esta bien\nIngrese 0 para indicar que esta mal\nMe siento: ");
   scanf("%d",&r);
   if (r==0){
      printf("Que mal, espero que te mejores");
      return 0;
   }else{
      printf("Me alegro");
      return 0;
   }
}
