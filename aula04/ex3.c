#include <stdio.h>

int main(){
    float orcamento;
    printf("Digite o valor do orçamento para a viagem: \n");
    scanf("%f", &orcamento);
    if (orcamento >= 10000){
        printf("João e Maria possuem orçamento para uma viagem internacional. \n");
    } else {
        printf("João e Maria irão optar por uma viagem nacional. \n");
    }
    return 0;
}