//elementos pares de la matriz
#include <stdio.h>
int main (){
    int panda=0;
    int matri[3][3];
    matri[0][0]=2;
    matri[0][1]=3;
    matri[0][2]=4;
    matri[1][0]=4;
    matri[1][1]=3;
    matri[1][2]=5;
    matri[2][0]=3;
    matri[2][1]=5;
    matri[2][2]=6;
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", matri[i][j]);
        }
        printf("\n");
    }
    printf("imprimir los elementos pares de la matriz\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if( matri[i][j]%2==0){
                printf("%d  ", matri[i][j]);
            }
        }
    }
    printf("\n");
    printf("--------------\n");
    printf("%d  %d  %d", matri[0][0],panda, matri[0][2]);
    printf("\n");
    printf("%d  %d  %d", matri[1][0], panda, panda);
    printf("\n");
    printf("%d  %d  %d", panda, panda,  matri[2][2] );
    printf("\n");
    return 0;
}