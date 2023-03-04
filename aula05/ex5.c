#include <stdio.h>

int main(){
    float soma = 0;
    float valor;
    int opcao;
    do{
        printf("M E N U  D E  O P Ç Õ E S \n");
        printf("1. Despósito \n");
        printf("2. Saque \n");
        printf("3. Saldo \n");
        printf("4. Sair \n");
        printf("Informe uma opção: \n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
            printf("Informe o valor: \n");
            scanf("%f", &valor);
            soma += valor;
            break;

            case 2:
            printf("Informe o valor: \n");
            scanf("%f", &valor);
            soma -= valor;
            break;
            
            case 3:
            printf("Saldo atual = R$ %.2f \n", soma);
            break;

            case 4:
            printf("Saindo... \n");

            default:
            printf("Opção inválida! \n");
        } 
        
    } while (opcao != 4);
        printf("Fim das operações! \n");
        return 0;
}