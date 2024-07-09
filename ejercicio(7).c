//Generar la matriz simetrica
#include <stdio.h>
void matrizT(int matriz[3][3]){
      for(int i=0; i<3;i++){
       for(int j=0; j<3; j++){
           printf(" %d ", matriz[j][i]);
       }
       printf("\n");
    }
}
int main() {
    printf("matriz original\n");
   int matriz[3][3];
   matriz[0][0]=4;
   matriz[0][1]=1;
   matriz[0][2]=8;
   matriz[1][0]=1;
   matriz[1][1]=6;
   matriz[1][2]=7;
   matriz[2][0]=8;
   matriz[2][1]=7;
   matriz[2][2]=2;
   for(int i=0; i<3;i++){
       for(int j=0; j<3; j++){
           printf(" %d ", matriz[i][j]);
       }
       printf("\n");
   }printf("\n");
   printf("¿la matriz es simetrica?\n");
   char si[40];
   scanf("%c", &si);
    if(si=="si"){
        printf("correcto la matriz es simetrica\n");
        matrizT(matriz);
   }else{
       printf("la matriz si es simetrica\n");
        matrizT(matriz);
   }
   return 0;
}
