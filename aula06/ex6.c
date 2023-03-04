#include <stdio.h>

#define VET_TAM 5

int main (){
    int vetor [VET_TAM];
    int num, i = 0, achou = 0;

    //preenche vetor
    for(int i = 0; i < VET_TAM; i++){
        printf("Entre com um número: \n");
        scanf("%d", &vetor[i]);
    } 
    printf("Informe o número a ser encontrado: \n");
    scanf("%d", &num);
    while (i < VET_TAM){
        if (vetor[i] == num){
            achou = 1;
            break;
        }
        i++;
    }
    if (achou == 1){
        printf("O número %d foi encontrado na posição %d do vetor. \n", num, i);
    } else {
        printf("O número %d não foi encontrado no vetor. \n", num);
    }
}