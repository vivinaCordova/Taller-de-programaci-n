//divicion de matrices 
#include <stdio.h>
double (*calcular_inversa(double matriz[3][6]))[3] {
for (int i = 0; i < 3; i++) { 
    double factor1 = matriz[i][i]; 
        for (int j = 0; j < 6; j++) {
            matriz[i][j] /= factor1;
            }

        for (int k = 0; k < 3; k++) {
            if (k != i) { 
                    for (int j = 0; j < 6; j++) {
                    matriz[k][j] -= factor2 * matriz[i][j]; 
                    }
            }
        }
    }

static double matriz_inversa[3][3]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_inversa[i][j] = matriz[i][j + 3];
        }
    }
    return matriz_inversa;
}
void multiplicacion(int matriz[3][3], double matriz2[3][3], double matriz_resultante[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz_resultante[i][j] = 0;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {  
                matriz_resultante[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int matriz1[3][3]={{5,3,2},
                      {-1,2,3},
                      {3,0,1}};
    printf("Matriz inicial:\n"); 
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    double matriz[3][6] = {
        {5, 3, 2, 1, 0, 0},
        {-1, 2, 3, 0, 1, 0},
        {3, 0, 1, 0, 0, 1}};


double (*matriz_inversa)[3] = calcular_inversa(matriz);
double matriz_resultante[3][3];
multiplicacion(matriz1, matriz_inversa, matriz_resultante);
    printf("\nResultado\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
