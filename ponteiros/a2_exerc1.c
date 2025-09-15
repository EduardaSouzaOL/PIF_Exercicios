#include <stdio.h>
// Exercício 1 - aula 02
// Implemente um programa que recebe do usuário um valor N representando 
//o tamanho dos arrays e depois
// 2 arrays de inteiros
// de tamanho N. Implemente uma função para calcular a soma dos arrays,
// elemento a elemento, usando ponteiros,
// preenchendo um terceiro array resultante que também foi passado como parametro.
// Por ex: o primeiro elemento do vetor
// resultante é a soma do primeiro elemento do primeiro vetor mais o primeiro elemento do segundo vetor,
// C[0] = A[0] + B[0].
//  Seu programa deve chamar essa função e imprimir o array resultante na tela.
void soma(int *a1, int *a2,int*total, int N){
    for(int i = 0; i < N; i++){
        *(total+ i) = *(a1) + *(a2);
        a1 ++;
        a2 ++;
    }
    for (int i = 0; i < N; i ++)
    {
        printf("%d",total[i]);
    }
    
}


int main(){
    int N;
    scanf("%d",&N);
    int arry1[N], arry2[N],resultarry[N];
    for(int i = 0; i < N; i ++){
        scanf("%d", &arry1[i]);
    }
    for(int j = 0; j < N; j ++){
        scanf("%d", &arry2[j]);
    }
    //soma(&arry1,&arry2,&resultarry);  
    soma(arry1,arry2,resultarry, N);

}
