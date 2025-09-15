#include <stdio.h>

void preencher(int N,int *arry){
    for(int i = 0; i < N; i ++){
        scanf("%d",(arry + i));
    }
}
void imprimir(int *arry,int N){
  for(int i = 0; i < N; i ++){
    printf("%d ", *(arry + i));
  }
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int arry[tamanho];
    preecher(tamanho,arry);
    imprimir(arry,tamanho);

}