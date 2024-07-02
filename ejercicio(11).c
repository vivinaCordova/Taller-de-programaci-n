//multiplicacion de matrices
#include<stdio.h>
int main() {
    int C[2][2];
    printf("Matriz 2:\n");
    int matri[2][2];
    matri[0][0] = 2;
    matri[0][1] = 3;
    matri[1][0] = 4;
    matri[1][1] = 1;  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matri[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 1:\n");
    int mani[2][2];
    mani[0][0] = 2;
    mani[0][1] = 3;
    mani[1][0] = 4;
    mani[1][1] = 2;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mani[i][j]);
        }
        printf("\n");
    }
    printf("\nResultado de la multiplicación:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) { 
                C[i][j] += matri[i][k] * mani[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}