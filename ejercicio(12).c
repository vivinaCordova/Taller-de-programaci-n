//divicion de matrices 
#include<stdio.h>

void funcion(float matriz[2][2]){
    float determinante = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    if (determinante != 0) {
        float inversa[2][2];
        inversa[0][0] = matriz[1][1] / determinante;
        inversa[0][1] = -matriz[0][1] / determinante;
        inversa[1][0] = -matriz[1][0] / determinante;
        inversa[1][1] = matriz[0][0] / determinante;
    } else {
        printf("La matriz no tiene inversa (determinante igual a cero).\n");
    }
}

void mulat(float matri1[2][2], float matri2[2][2]){
    float C[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                C[i][j] += matri1[i][k] * matri2[k][j];
            }
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }
}
int main(){
    float matri[2][2];
    matri[0][0]=2;
    matri[0][1]=3;
    matri[1][0]=4;
    matri[1][1]=5;
    printf("Matriz matri:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf(" %.0f ", matri[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    float matriz[2][2];
    matriz[0][0]=3;
    matriz[0][1]=4;
    matriz[1][0]=2;
    matriz[1][1]=3;
    funcion(matriz);
    printf("\nla divicion es:\n");
    mulat(matriz, matri);

    return 0;
}
