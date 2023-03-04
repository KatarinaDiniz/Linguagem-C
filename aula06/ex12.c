#include <stdio.h>
#include <ctype.h>

#define NOME_TAM 30

int main(){
    char nome[NOME_TAM];
    int i;
    printf("Digite o nome do(a) aluno(a): \n");
    fgets(nome, NOME_TAM, stdin);
    printf("Nome ANTES da mudança: %s\n", nome);

    for(int i = 0; i < NOME_TAM; i++){
        nome[i] = toupper(nome[i]);
    }
    printf("Nome DEPOIS da mudança: %s\n", nome);
    return 0;
}