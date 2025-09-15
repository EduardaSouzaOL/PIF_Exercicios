#include <stdio.h>

int main(){
    char O;
    scanf("%c", &O);
    int i, j;
    double M[12][12], soma = 0.0;

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
//superior
    for (i = 0; i <= 4; i++){
        for (j = i + 1; j <= 10 - i; j++){
            soma += M[i][j];
        }
    }
        if (O == 'S'){
            printf("%.1lf\n", soma);
        }
        else if (O == 'M'){
            printf("%.1lf\n", soma / 30.0);
    }
}

