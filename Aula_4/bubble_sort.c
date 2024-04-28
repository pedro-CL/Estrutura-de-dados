#include<stdio.h>

int main(){
    
    int vetor[] = {50,10,2,3,42,100,0,1,7,9};
    int tmp;

    for(int j = 0; j < 9; j++){

        for(int i = 0; i < 9; i++){

            if(vetor[i] > vetor[i+1]){

                tmp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = tmp;
            }
        }
    }

    for(int i = 0; i<10;i++){
        printf("%d ", vetor[i]);
    }

return 0;
}