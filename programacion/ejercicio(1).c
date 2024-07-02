//imprimir los cuatro elementos de la esquina 
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
    printf("imprimir los 4 elementos de la esquina\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i%2==0 && j%2==0){
                printf(" %d    ", matri[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}