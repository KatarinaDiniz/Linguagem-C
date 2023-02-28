#include <stdio.h>

int main(){
    int n;

    printf("(1) para Saldo \n (2) para Extrato \n (3) para Saque \n (4) para Sair \n");
    printf("Informe a operação desejada: \n");
    scanf("%d", &n);

    switch(n){
        case 1:
        printf("Saldo \n");
        break;

        case 2:
        printf("Extrato \n");
        break;

        case 3:
        printf("Saque \n");
        break;

        case 4: 
        printf("Sair \n");
        break;
        default:
        printf("Inválido \n");
    };
return 0;
}