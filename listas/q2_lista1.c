#include <stdio.h>

int main()
{
    double M[12][12];
    int L;
    scanf("%d", &L);
    char T;
    scanf(" %c", &T);

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
//linha
    double soma = 0;
    for (int j = 0; j < 12; j++){
        soma += M[L][j];
    }
    if (T == 'S'){
        printf("%.1f\n", soma);
    }
    else if(T == 'M'){
        printf("%.1lf\n", soma / 12);
    }

    return 0;
}