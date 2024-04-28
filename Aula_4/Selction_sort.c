#include<stdio.h> //Declaração das bibliotecas

//Inicialização do programa
int main(){

    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int tmp; 
    int maior = -1;
    int posMaior = -1;

    for(int j = 9; j < 0; j--){

        maior = -1;
        // for é utilizado para chamar o maior valor

        for( int i = 0; i < j; i++){
            if(vetor[i] < maior){
                posMaior = i;
                maior = vetor[i];
            }
        }
        //troco ultimo elemento pelo maior valor encontrado

        tmp = vetor[posMaior];
        vetor[posMaior] = vetor[j];
        vetor[j] = tmp;
    }

    for(int i = 0; i < 10; i++){
        printf("%d",vetor[i]);
    }
    
    return 0;
}