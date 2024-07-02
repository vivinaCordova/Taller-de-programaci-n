//resta de matriz
#include <stdio.h>
int main (){
    printf("Matriz 1\n");
    int mani[3][3];
    mani[0][0]=4;
    mani[0][1]=7;
    mani[0][2]=5;
    mani[1][0]=6;
    mani[1][1]=8;
    mani[1][2]=7;
    mani[2][0]=6;
    mani[2][1]=5;
    mani[2][2]=7;
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             printf(" %d ", mani[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2\n");
    int matri[3][3];
    matri[0][0]=2;
    matri[0][1]=3;
    matri[0][2]=4;
    matri[1][0]=4;
    matri[1][1]=3;
    matri[1][2]=5;
    matri[2][0]=5;
    matri[2][1]=3;
    matri[2][2]=2;
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             printf(" %d ", matri[i][j]);
        }
        printf("\n");
    }
    int panda[3][3];
    printf("Resta\n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            panda[i][j] = mani[i][j]- matri[i][j];
            printf(" %d ", panda[i][j]);
        }
        printf("\n");
    }
    return 0;
}