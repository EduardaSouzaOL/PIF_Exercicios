#include <stdio.h>

int main(){
    char nomearr[99];
    int nome;
    double salario_fixo, montante, total;

    scanf("%99s", &nomearr);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &montante);

    total = salario_fixo + (montante * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}