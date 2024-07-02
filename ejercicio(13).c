//potencia de matrices 
#include <stdio.h>
int main() {
    int potencia = 2;
    int matri[2][2];
    matri[0][0]=2;
    matri[0][1]=3;
    matri[1][0]=4;
    matri[1][1]=2; 
    printf("Matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matri[i][j]);
        }
        printf("\n");
    }
    
    // Inicializar matriz C con la matriz original matri
    int C[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = matri[i][j];
        }
    }
    for (int i = 1; i < potencia; i++) {
        int temp[2][2] = {{0, 0}, {0, 0}};
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    temp[i][j] += C[i][k] * matri[k][j];
                }
            }
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                C[i][j] = temp[i][j];
            }
        }
    }
    printf("\nResultado de la matriz elevada a la potencia %d:\n", potencia);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}