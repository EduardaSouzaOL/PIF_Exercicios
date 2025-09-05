// Exercício 2: Somando valores apontados

// Objetivo: Acessar os valores de variáveis através de ponteiros e realizar uma operação matemática.
// Instruções:
// Desenvolva uma função chamada somar_valores que receba como argumentos um ponteiro para um inteiro
// e um ponteiro para um número de ponto flutuante. A função deve somar os valores para os quais os
// ponteiros estão apontando e retornar o resultado da soma. No programa principal (main), declare as variáveis,
// inicialize-as com valores de sua escolha e chame a função, imprimindo o resultado da soma.
// Exemplo de saída:
// Valor 1: 5 
// Valor 2: 3.5 
// Soma total: 8.500000

somar_valores(int *P,float *F){
    return *P + *F;
}
int main(){
    int N,*P = &N;
    float N2,*F = &N2;
    scanf("%d",&N);
    scanf("%f",&F);
    printf(somar_valores(&N,&N2));
    
}