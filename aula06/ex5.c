#include <stdio.h>
#define VET_TAM 5

int main(){
    int num [VET_TAM];
    for(int i =0; i < VET_TAM; i++) {
        printf("Entre com um número: \n");
        scanf("%d", &num[i]);
        printf("O valor digitado foi: %d \n", num[i]);
    }
    return 0;
}