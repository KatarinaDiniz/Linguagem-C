#include <stdio.h>

int main(){
    char x;
    float valor, desconto, total;
    printf("Digite o valor da compra: \n");
    scanf("%f", &valor);
    printf("Digite a letra que representa seu desconto de acordo com a cor: \n");
    printf("a. azul \n");
    printf("v. vermelho \n");
    printf("b. branco \n");
    printf("Digite sua opção: \n");
    scanf("%s", &x);

    switch(x){
        case 'a':
        printf("Você escolheu a cor azul, seu desconto será de 30 por cento \n");
        desconto = 30;
        break;

        case 'v':
        printf("Você escolheu a cor vermelha, seu desconto será de 20 por cento \n");
        desconto = 20;
        break;

        case 'b':
        printf("Você escolheu a cor branca, seu desconto será de 10 por cento \n");
        desconto = 10;
        break;

        default:
        printf("Opção inválida, não será concedido desconto. \n");
        desconto = 0;
    }
    total = valor - (valor * desconto/100);
    printf("O valor da sua compra é R$ %.2f", total);
return 0;
}