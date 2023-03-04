#include <stdio.h>

int main(){
    int qtde_notas = 0, opcao;
    float notas, media, soma_notas = 0.0;

    do {
        printf("Digite a nota do aluno: %d \n", qtde_notas + 1);
        scanf("%f", &notas);
        qtde_notas += 1;
        soma_notas += notas;
        printf("Digite 1 para informar outra nota ou 2 para encerrar: \n");
        scanf("%d", &opcao);
    } while (opcao != 2);

    printf("Quantidade de alunos %d \n", qtde_notas);
    media = soma_notas / (float) qtde_notas;
    printf("Média das notas = %.2f \n", media);
    return 0;
}