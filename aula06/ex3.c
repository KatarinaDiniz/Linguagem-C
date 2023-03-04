#include <stdio.h>

int main(){
    int contador, opcao;
    do {
        printf("Digite um número para contagem regressiva: \n");
        scanf("%d", &contador);
        for (contador; contador >= 1; contador --){
            printf("%d \n", contador);
        }
        printf("Digite 1 para colocar outro número ou 2 para sair: \n");
        scanf("%d", &opcao);
    } while (opcao != 2);
    return 0;
}