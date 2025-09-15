#include <stdio.h>

int main(){
    int X[10];
    int i;

    for(i = 0;i<10;i++){
        int N;
        scanf("%d",&N);
        if(N>0){
            X[i] = N;
        }else{
            X[i] = 1;
        }
    }
    for(i = 0; i<10; i++){
        printf("X[%d] = %d\n",i, X[i]);
    }
    
    return 0;
}