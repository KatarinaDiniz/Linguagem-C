#include <stdio.h>

int main(){
    float metragem1, metragem2, resultado;
    int resp;
    metragem1 = 0;
    metragem2 = 0;
    resultado = 0;
    printf("C Á L C U L O  D E  M E T R O S  Q U A D R A D O S \n");
    do {
        printf("Digite a primeira metragem do terreno: \n");
        scanf("%f", &metragem1);
        printf("Digite a segunda metragem do terreno: \n");
        scanf("%f", &metragem2);
        resultado = metragem1 * metragem2;
        printf("O terreno tem = %.2f m2 \n", resultado);
        printf("Digite 1 para continuar ou 2 para sair: \n");
        scanf("%d", &resp);
    } while (resp == 1);
    return 0;
}