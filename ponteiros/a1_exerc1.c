// Exercício 1: Calculando o dobro com ponteiro

// Objetivo: Usar um ponteiro para alterar o valor de uma variável e retornar o endereço de outra.
// Instruções:
// Crie uma função chamada dobrar_e_retornar que receba um ponteiro para um número inteiro e 
//um ponteiro para um número ponto flutuante (float). A função deve dobrar o valor do inteiro,
// modificando-o através do ponteiro. Em seguida, a função deve retornar o endereço do número ponto flutuante.
// No programa principal (main), declare as variáveis e chame a função, imprimindo os valores para confirmar 
//que o número inteiro foi dobrado e que o endereço do número de ponto flutuante foi retornado corretamente.
// Exemplo de saída:
// Valor do inteiro antes: 5 
// Endereço do float: 0x7ffee... 
// Valor do inteiro depois: 10

#include <stdio.h>
int dobrar_e_retornar(int *P){
    *P = *P *2;
}

int main(){
    int N;
    //int *P = &N; // ponteiro igual ao endereço de N
    scanf("%d",&N);
    dobrar_e_retornar(&N);
    printf("%p\n",&N);
    printf("%d",N);

}