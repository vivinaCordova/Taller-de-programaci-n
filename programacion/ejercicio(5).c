//matriz inversa
#include <stdio.h>
int main() {
    float matri[2][2];;
    matri[0][0] = 2;
    matri[0][1] = 3;
    matri[1][0] = 4;
    matri[1][1] = 1;  
    float determinante = matri[0][0] * matri[1][1] - matri[0][1] * matri[1][0];
    if (determinante != 0) {
        float inversa[2][2];
        inversa[0][0] = matri[1][1] / determinante;
        inversa[0][1] = -matri[0][1] / determinante;
        inversa[1][0] = -matri[1][0] / determinante;
        inversa[1][1] = matri[0][0] / determinante;
        printf("Matriz inversa:\n");
        printf("%.2f   %.2f\n", inversa[0][0], inversa[0][1]);
        printf(" %.2f   %.2f\n", inversa[1][0], inversa[1][1]);
    } else {
        printf("La matriz no tiene inversa (determinante igual a cero).\n");
    }
    return 0;
}

