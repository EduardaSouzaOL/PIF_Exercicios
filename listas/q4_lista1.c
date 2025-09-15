
#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int M[N][N];
        int i, j;
        //matriz
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                M[i][j] = 0;
            }
        }
        //diagonais
        for (i = 0; i < N; i++) {
            M[i][i] = 2;
            M[i][N - 1 - i] = 3;
        }
        //quadrado
        int a = N / 3;
        int z = N - a;
        for (i = a; i < z; i++) {
            for (j = a; j < z; j++) {
                M[i][j] = 1;
            }
        }
        //centro
        M[N / 2][N / 2] = 4;
        //imprimir matriz
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("%d", M[i][j]);
            }
            printf("\n");
        }
        printf("\n"); 
    }
    return 0;
}